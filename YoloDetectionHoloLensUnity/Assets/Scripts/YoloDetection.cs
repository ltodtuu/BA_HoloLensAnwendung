using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;

#if ENABLE_WINMD_SUPPORT
using Windows.UI.Xaml;
using HoloLensForCV;
using YoloRuntime;
#endif

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.WSA.Input;


using DrawingUtils;

// https://devblogs.microsoft.com/dotnet/ml-net-and-model-builder-at-net-conf-2019-machine-learning-for-net/?utm_source=vs_developer_news&utm_medium=referral
namespace YoloDetectionHoloLens
{
    // Using the hololens for cv .winmd file for runtime support
    // https://docs.unity3d.com/2018.4/Documentation/Manual/IL2CPP-WindowsRuntimeSupport.html
    public class YoloDetection : MonoBehaviour
    {
        #region UnityVariables
        public CvUtils.DeviceTypeUnity deviceType;

        // Gesture recognizer
        private GestureRecognizer _gestureRecognizer;

        // Texture handler for bounding boxes
        public DrawBoundingBoxes drawBoundingBoxes;
        private Boolean processDone;
        private Boolean initializedAnchorPoints;
        public GameObject rightPoint;
        public GameObject leftPoint;
        public GameObject frontPoint;
        // Parameters for host connect
        // https://stackoverflow.com/questions/32876966/how-to-get-local-host-name-in-c-sharp-on-a-windows-10-universal-app
        // Connecting to desktop host IP, not the hololens... Get the IP of PC and retry with specified port 
        public string ipAddressForConnect = "192.168.2.114";
        public string hostId = "12345";

        public Text myText;
        int _tapCount;

        private Boolean crossStreet;
        private Boolean crossStreetWithCrossWalk;
        private Boolean crossStreetWithTrafficLight;
        

        [SerializeField]
        public Text instruction;
        [SerializeField]
        public Text finished;
        [SerializeField] private Text timeLeftToWait;
        private Boolean trafficLightIsGreen;
        [SerializeField] private DirectionInd directionInd;
        [SerializeField] private SpeechManager speechManager;
        private Camera mainCam;
              
        // From Tiny YOLO string labels.
        private string[] _labels = {
            "aeroplane", "bicycle", "bird", "boat", "bottle",
            "bus", "car", "cat", "chair", "cow",
            "diningtable", "dog", "horse", "motorbike", "person",
            "pottedplant", "sheep", "sofa", "train", "tvmonitor"
        };

        private bool _holoLensMediaFrameSourceGroupStarted;

        public enum SensorTypeUnity
        {
            Undefined = -1,
            PhotoVideo = 0,
            ShortThrowToFDepth = 1,
            ShortThrowToFReflectivity = 2,
            LongThrowToFDepth = 3,
            LongThrowToFReflectivity = 4,
            VisibleLightLeftLeft = 5,
            VisibleLightLeftFront = 6,
            VisibleLightRightFront = 7,
            VisibleLightRightRight = 8,
            NumberOfSensorTypes = 9
        }
        public SensorTypeUnity sensorTypePv;
        #endregion

#if ENABLE_WINMD_SUPPORT
        // Required for media frame source initialization
        private MediaFrameSourceGroupType _selectedMediaFrameSourceGroupType = MediaFrameSourceGroupType.PhotoVideoCamera;
        private SensorFrameStreamer _sensorFrameStreamer;
        private SpatialPerception _spatialPerception;
        private HoloLensForCV.DeviceType _deviceType;
        private MediaFrameSourceGroup _holoLensMediaFrameSourceGroup;
        private SensorType _sensorType;
#endif

        #region UnityMethods
        // Use this for initialization
        async void Start()
        {
            // Create the gesture handler
            InitializeHandler();

            // Initialize the bounding box canvas
            drawBoundingBoxes.InitDrawBoundingBoxes();

            // Wait for media frame source groups to be initialized
            await StartHoloLensMediaFrameSourceGroup();
            //Initialisiere Punkte
            rightPoint = GameObject.Find("RightPoint");
            leftPoint = GameObject.Find("LeftPoint");
            frontPoint = GameObject.Find("FrontPoint");
            leftPoint.SetActive(false);
            rightPoint.SetActive(false);
            frontPoint.SetActive(false);

            crossStreet = false;
            crossStreetWithCrossWalk = false;
            crossStreetWithTrafficLight = false;
            instruction.text = "";
            finished.text = "";
                       
            mainCam = Camera.main;
            timeLeftToWait.text = "";
        }

        async void OnApplicationQuit()
        {
            await StopHoloLensMediaFrameSourceGroup();
        }

        #endregion

        /// <summary>
        /// Initialize and start the hololens media frame source groups
        /// </summary>
        /// <returns>Task result</returns>
        async Task StartHoloLensMediaFrameSourceGroup()
        {
#if ENABLE_WINMD_SUPPORT
            // Plugin doesn't work in the Unity editor
            myText.text = "Initalizing MediaFrameSourceGroup.";

            Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up sensor frame streamer");
            _sensorType = (SensorType)sensorTypePv;
            _sensorFrameStreamer = new SensorFrameStreamer();
            _sensorFrameStreamer.Enable(_sensorType);

            Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up spatial perception");
            _spatialPerception = new SpatialPerception();

            Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up the media frame source group");
            
            // Cast device type 
            _deviceType = (HoloLensForCV.DeviceType)deviceType;
            _holoLensMediaFrameSourceGroup = new MediaFrameSourceGroup(
                _selectedMediaFrameSourceGroupType,
                _spatialPerception,
                _deviceType,
                _sensorFrameStreamer);
            _holoLensMediaFrameSourceGroup.Enable(_sensorType);

            Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Starting the media frame source group");
            await _holoLensMediaFrameSourceGroup.StartAsync();
            _holoLensMediaFrameSourceGroupStarted = true;

            myText.text = "Bitte Double-Tap Geste vollführen, um mit dem Host zu verbinden";

#endif
        }

        async Task StopHoloLensMediaFrameSourceGroup()
        {
#if ENABLE_WINMD_SUPPORT
            if (_holoLensMediaFrameSourceGroup == null || 
                !_holoLensMediaFrameSourceGroupStarted)
            {
                return;
            }

            await _holoLensMediaFrameSourceGroup.StopAsync();
            _holoLensMediaFrameSourceGroup = null;
            _sensorFrameStreamer = null;
            _holoLensMediaFrameSourceGroupStarted = false;
#endif
        }

        /// <summary>
        /// Connect to the desktop client and begin receiving 
        /// bounding box information.
        /// </summary>
        /// <returns></returns>
        private IEnumerator ConnectSocket()
        {   
#if ENABLE_WINMD_SUPPORT

            myText.text = "Connecting to host socket.";

            Debug.Log("Connecting to host socket.");

            // c++ call to connect to socket, handlers now in c++ code
            InteropDeviceReceiver interopDeviceReceiver
                = new InteropDeviceReceiver();

            // Connect to provided IP address and host port
            interopDeviceReceiver.ConnectSocket_Click(ipAddressForConnect, hostId);

            // Loop infinitely
            Boolean lookLeft = false;
            Boolean lookRight = false;
            var waitCounter = 0;
            List<BoundingBox> prevBoundingBoxes = null;
            
            processDone = false;
            trafficLightIsGreen = false;
            int count = 0;
            crossStreet = false;
            crossStreetWithCrossWalk = false;
            crossStreetWithTrafficLight = false;
            int timeToWait = 30;
            int x = 0;
            int y = 0;
            List<int[]> currentFrameCoordinates = new List<int[]>();
            List<int[]> pastFrameCoordinates = new List<int[]>();
            int noOfVehiclesCurrent=0;
            int noOfVehiclesPast=0;
            
            while (true)
            {
                var dataBuffer = interopDeviceReceiver.GetBoundingBoxResults();
                List<BoundingBox> boundingBoxes =
                    new List<BoundingBox>();

                // Iterate across data buffer, which is the total number of 
                // elements in the buffer
                const int boxSize = 6;
                var textString = "";
                
                if (dataBuffer.Count != 0)
                {
                    var numBoxes = (int)(dataBuffer.Count / (float)boxSize);
                    
                    for (var boxCount = 0; boxCount < numBoxes; boxCount++)
                    {
                        //only allow Vehicles to be framed
                        //if(dataBuffer[(boxCount * boxSize) + 0] == 1 || dataBuffer[(boxCount * boxSize) + 0] == 5 || dataBuffer[(boxCount * boxSize) + 0] == 6 || dataBuffer[(boxCount * boxSize) + 0] ==13 || dataBuffer[(boxCount * boxSize) + 0] == 18)
                        //{
                            
                            BoundingBox box = new BoundingBox
                            {
                                TopLabel = dataBuffer[(boxCount * boxSize) + 0], // TopLabel is int
                                X = dataBuffer[(boxCount * boxSize) + 1],
                                Y = dataBuffer[(boxCount * boxSize) + 2],

                                Height = dataBuffer[(boxCount * boxSize) + 3],
                                Width = dataBuffer[(boxCount * boxSize) + 4],

                                Confidence = dataBuffer[(boxCount * boxSize) + 5]
                            };

                            // Set top label from the label string by index.
                            box.Label = _labels[box.TopLabel];

                            // Add the filled box to list 
                            boundingBoxes.Add(box);
                        //}
                        /*else
                        {
                            boundingBoxes.Add(new BoundingBox()
                            {
                                Confidence = 0,
                                Label = "",
                                Height = 0,
                                Width = 0,
                                X = 0,
                                Y = 0
                            });
                            
                        }*/
                    }
                    
                    if(prevBoundingBoxes == null || count%5 == 0)
                    {
                        foreach (var boundingBox in boundingBoxes)
                        {
                            prevBoundingBoxes.Add(boundingBox);
                        }
                    }
                                        // Draw the list of boxes
                    //drawBoundingBoxes.DrawBoxes(boundingBoxes);
                    noOfVehiclesCurrent = boundingBoxes.Count;
                    // Debug the text string outside of loop
                    //myText.text = $"Received {boundingBoxes.Count} bounding boxes.";
                    myText.text = $"Achtung {boundingBoxes.Count} Fahrzeuge von System erkannt.";
                    yield return new WaitForSeconds(0.05f);
                    Debug.Log(textString);
                }
                else
                {
                    // Draw the list of empty boxes to clear
                    // prior elements
                    boundingBoxes.Add(new BoundingBox()
                    {
                        Confidence = 0,
                        Label = "",
                        Height = 0,
                        Width = 0,
                        X = 0,
                        Y = 0});
                    
                    //myText.text = "No bounding boxes received.";
                    myText.text = "Keine Fahrzeuge erkannt.";
                    yield return new WaitForSeconds(0.05f);
                    Debug.Log(myText.text);
                    noOfVehiclesCurrent = 0;
                }
                if(count%3 == 0)
                {
                    noOfVehiclesPast = noOfVehiclesCurrent;
                }
                if(waitCounter >0)
                {
                    timeLeftToWait.text = $"{timeToWait - waitCounter}";
                }
                else
                {
                    timeLeftToWait.text ="";
                }
                if(crossStreet)
                {
                   
                    if(!initializedAnchorPoints)
                    {
                        setAnchorPoints("Left");
                        setAnchorPoints("Right");
                        setAnchorPoints("Front");
                        initializedAnchorPoints = true;
                        speechManager.keywordRecognizer.Stop();
                    }
                    // Start of watching the Streets
                    if(!lookLeft && !lookRight && !processDone)
                    {
                        lookLeft = true;
                    }

                    //first time looking left
                    if(lookLeft && !lookRight &&!processDone)
                    {
                        processDone = false;
                        instruction.text = "Bitte schaue nach links";
                        leftPoint.SetActive(true);
                        rightPoint.SetActive(false);
                        frontPoint.SetActive(false);
                        if(isLookingInDirection("Left"))
                        {
                            //Time to wait is deppendable on avg FPS The Person should look about 3 to 5 Seconds in one Direction
                            directionInd.Hide();
                            if(noOfVehiclesCurrent == 0) // no vehicles detected --> goot to go --> look to the other site
                            {
                                if(waitCounter == timeToWait)
                                {
                                    lookRight = true;
                                    lookLeft =  false;
                                    waitCounter = 0;
                                }
                                else
                                {
                                    waitCounter++; // if no vehicles are detected the regular 3 seconds should be waited either way
                                }
                            } 
                            else if(noOfVehiclesCurrent > noOfVehiclesPast) //New Vehicle was detected
                            {
                                    waitCounter = 0;
                            }
                            else if(noOfVehiclesCurrent == noOfVehiclesPast ) // nothing changed: either cars are standing still or are still dirving in field of view
                            {
                                if(noOfVehiclesCurrent > 0)
                                { 
                                    //if number of Vehicles stays the same we have to find out if they are moving (perhaps some Vehicles are standing parked next to the road) --> check if the coordinates of the BoundingBoxes Change 
                                    // since it does not work to create a Function for that we just create a function that takes 2 Lists of 2D arrays with X and Y Coordinates that 
                                    // returns a Boolean wethere there are any moving Vehicles (Coordniates should Change every frame (maybe change later to every 5th frame for better stability & performance))
                                    if(count%5 == 0)
                                    {
                                        foreach (BoundingBox box in boundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y}; 
                                                currentFrameCoordinates.Add(a);
                                            }
                                        }
                                        foreach (BoundingBox box in prevBoundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                pastFrameCoordinates.Add(a);
                                            }
                                        }
                                        if(currentFrameCoordinates.Count == pastFrameCoordinates.Count)
                                        {
                                            if(areThereMovingObjects(currentFrameCoordinates,pastFrameCoordinates))//if there are moving Vehicles(change in Coordinates)
                                            {
                                            //reset waiting time we dont want to cross the street when there are still moving cars.
                                            waitCounter = 0;      
                                            }
                                            else
                                            {
                                                if(waitCounter >= timeToWait)  //if nothing is moving and the regular 3 seconds have been waited its time to go look on the other side
                                                {
                                                    lookRight = true;
                                                    lookLeft =  false;
                                                    waitCounter = 0;
                                                }
                                                waitCounter++; // if nothing is moving increase WaitCounter 
                                            }
                                        }
                                    }
                                    else
                                    {
                                        waitCounter++;
                                    }    
                                }
                            }
                            else if(noOfVehiclesCurrent < noOfVehiclesPast) //less vehicles have been detected -> vehicles are driving out of the field of view
                            {
                                waitCounter = 0; //if ther are less Vehicles than before just w8 till number does no longer change or 0 Vehicles are Visible (Frame will not be counted as a valid Frame) 
                            }
                            
                            
                        }
                        else
                        {
                            directionInd.Show(leftPoint.transform.position);
                            //if user looks away from the Side he is supposed to look reset Time and also show direcional indeicator towards that point, This Should happen automatically since the Indicator is already shown if the anchorpoint is not within the field of view
                            waitCounter = 0;
                        }
                    }
                    // looking to the right
                    else if(!lookLeft && lookRight &&!processDone)
                    {
                        leftPoint.SetActive(false);
                        rightPoint.SetActive(true);
                        frontPoint.SetActive(false);
                        instruction.text = "Bitte schaue nach rechts ";
                        if(isLookingInDirection("Right"))
                        {
                            directionInd.Hide();
                            //Time to wait is deppendable on avg FPS The Person should look about 3 to 5 Seconds in one Direction
                            if(noOfVehiclesCurrent == 0) // no vehicles detected --> goot to go --> look to the other site
                            {
                                if(waitCounter == timeToWait)
                                {
                                    lookRight = true;
                                    lookLeft =  true;
                                    waitCounter = 0;
                                }
                                else
                                {
                                    waitCounter++ ;// if no vehicles are detected the regular 3 seconds should be waited either way
                                }
                            } 
                            else if(noOfVehiclesCurrent > noOfVehiclesPast) //New Vehicle was detected
                            {
                                    waitCounter = 0;
                            }
                            else if(noOfVehiclesCurrent == noOfVehiclesPast) // nothing changed: either cars are standing still or are still dirving in field of view
                            {
                                //if number of Vehicles stays the same we have to find out if they are moving (perhaps some Vehicles are standing parked next to the road) --> check if the coordinates of the BoundingBoxes Change 
                                // since it does not work to create a Function for that we just create a function that takes 2 Lists of 2D arrays with X and Y Coordinates that 
                                // returns a Boolean wethere there are any moving Vehicles (Coordniates should Change every frame (maybe change later to every 5th frame for better stability & performance))
                                if(noOfVehiclesCurrent > 0)
                                {
                                    if(count%5 ==0)
                                    {
                                        foreach (BoundingBox box in boundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                currentFrameCoordinates.Add(a);
                                            }
                                        }
                                        foreach (BoundingBox box in prevBoundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                pastFrameCoordinates.Add(a);
                                            }
                                        }
                                        if(currentFrameCoordinates.Count == pastFrameCoordinates.Count)
                                        {
                                            if(areThereMovingObjects(currentFrameCoordinates,pastFrameCoordinates))//if there are moving Vehicles(change in Coordinates)
                                            {
                                            //reset waiting time we dont want to cross the street when there are still moving cars.
                                            waitCounter = 0;      
                                            }
                                            else
                                            {
                                                if(waitCounter >= timeToWait)  //if nothing is moving and the regular 3 seconds have been waited its time to go look on the other side
                                                {
                                                    lookRight = true;
                                                    lookLeft =  true;
                                                    waitCounter = 0;
                                                }
                                                waitCounter++; // if nothing is moving increase WaitCounter 
                                            }
                                        }
                                    }
                                    else
                                    {
                                        waitCounter++;
                                    }
                                }
                            }
                            else if(noOfVehiclesCurrent < noOfVehiclesPast) //less vehicles have been detected -> vehicles are driving out of the field of view
                            {
                                waitCounter = 0; //if ther are less Vehicles than before just w8 till number does no longer change or 0 Vehicles are Visible (Frame will not be counted as a valid Frame) 
                            }
                            
                        }
                        else
                        {
                            directionInd.Show(rightPoint.transform.position);
                            //if user looks away from the Side he is supposed to look reset Time and also show direcional indeicator towards that point, This Should happen automatically since the Indicator is already shown if the anchorpoint is not within the field of view
                            waitCounter = 0;
                        }
                    }
                    // looking 2nd time to the left
                    else if(lookLeft && lookRight &&!processDone)
                    {
                        leftPoint.SetActive(true);
                        rightPoint.SetActive(false);
                        frontPoint.SetActive(false);
                        instruction.text = "Bitte schaue nach links";
                        if(isLookingInDirection("Left") == true)
                        {
                            directionInd.Hide();
                            //Time to wait is deppendable on avg FPS The Person should look about 3 to 5 Seconds in one Direction
                            if(noOfVehiclesCurrent == 0) // no vehicles detected --> goot to go --> look to the other site
                            {
                                if(waitCounter == timeToWait)
                                {
                                    lookRight = false;
                                    lookLeft =  false;
                                    processDone = true;
                                    waitCounter = 0;
                                }
                                else
                                {
                                    waitCounter++; // if no vehicles are detected the regular 3 seconds should be waited either way
                                }
                            } 
                            else if(noOfVehiclesCurrent > noOfVehiclesPast) //New Vehicle was detected
                            {
                                    waitCounter = 0;
                            }
                            else if(noOfVehiclesCurrent == noOfVehiclesPast) // nothing changed: either cars are standing still or are still dirving in field of view
                            {
                                //if number of Vehicles stays the same we have to find out if they are moving (perhaps some Vehicles are standing parked next to the road) --> check if the coordinates of the BoundingBoxes Change 
                                // since it does not work to create a Function for that we just create a function that takes 2 Lists of 2D arrays with X and Y Coordinates that 
                                // returns a Boolean wethere there are any moving Vehicles (Coordniates should Change every frame (maybe change later to every 5th frame for better stability & performance))
                                if(noOfVehiclesCurrent > 0 && count%5 ==0)
                                {
                                    if(count %5 ==0)
                                    {
                                        foreach (BoundingBox box in boundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                currentFrameCoordinates.Add(a);
                                            }
                                        }
                                        foreach (BoundingBox box in prevBoundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                pastFrameCoordinates.Add(a);
                                            }
                                        }
                                        if(currentFrameCoordinates.Count == pastFrameCoordinates.Count)
                                        {
                                            if(areThereMovingObjects(currentFrameCoordinates,pastFrameCoordinates))//if there are moving Vehicles(change in Coordinates)
                                            {
                                            //reset waiting time we dont want to cross the street when there are still moving cars.
                                            waitCounter = 0;      
                                            }
                                            else
                                            {
                                                if(waitCounter >= timeToWait)  //if nothing is moving and the regular 3 seconds have been waited its time to go look on the other side
                                                {
                                                    lookRight = false;
                                                    lookLeft =  false;
                                                    processDone = true;
                                                    waitCounter = 0;
                                                }
                                                waitCounter++; // if nothing is moving increase WaitCounter 
                                            }
                                        }
                                    }
                                    else
                                    {
                                        waitCounter++;
                                    }
                                }
                            }
                            else if(noOfVehiclesCurrent < noOfVehiclesPast) //less vehicles have been detected -> vehicles are driving out of the field of view
                            {
                                waitCounter = 0; //if ther are less Vehicles than before just w8 till number does no longer change or 0 Vehicles are Visible (Frame will not be counted as a valid Frame) 
                            }                                                               
                        }
                        else
                        {
                            directionInd.Show(leftPoint.transform.position);
                            //if user looks away from the Side he is supposed to look reset Time and also show direcional indeicator towards that point, This Should happen automatically since the Indicator is already shown if the anchorpoint is not within the field of view
                            waitCounter = 0;
                        }
                        
                    } 

                    //No Cars Have een detected so it's now time to cross the street 

                    if(processDone)
                    {
                        // Activate the Frontt Anchorpoint
                        leftPoint.SetActive(false);
                        rightPoint.SetActive(false);
                        frontPoint.SetActive(true);
                        if(!speechManager.keywordRecognizer.IsRunning)
                        {       
                            speechManager.keywordRecognizer.Start();
                        }
                        // if User is looking forward he can than cross the Street and he will be  asked to end the Process bny Saying 'Done'
                        if(isLookingInDirection("Front"))
                        {
                            directionInd.Hide();
                            instruction.text ="Du kannst die Straße nun überqueren";
                            finished.text = "Bitte bestätige mit 'Done', wenn Sie die Straße überquert hast";
                        } 
                        else
                        {
                            directionInd.Show(frontPoint.transform.position);
                            instruction.text = "Bitte folge mit deinem Kopf dem Pfeil";
                        }                          
                    }                                   
                }
                else if(crossStreetWithCrossWalk)
                {
                    // cars have to stop either way, but there is a chance that some drivers might not stop imeadiatly so wait till there are no moving Vehicles detected and than start crossing the Street
                    // Frist User is supposed to look to the leftSide than look to the Right side 
                    // 3 things can happen 
                    // 1. Vehicles are still moving
                    //  2. No vehicles detected
                    //  3. Vehiles detected but not moving
                    
                    if(!initializedAnchorPoints)
                    {
                        setAnchorPoints("Left");
                        setAnchorPoints("Right");
                        setAnchorPoints("Front");
                        initializedAnchorPoints = true;
                        speechManager.keywordRecognizer.Stop();
                    }
                    // Start of watching the Streets
                    if(!lookLeft && !lookRight &&!processDone)
                    {
                        lookLeft = true;
                    }

                    //first time looking left
                    if(lookLeft && !lookRight )
                    {
                        processDone = false;
                        instruction.text = "Bitte schaue nach links";
                        leftPoint.SetActive(true);
                        rightPoint.SetActive(false);
                        frontPoint.SetActive(false);
                        if(isLookingInDirection("Left") == true)
                        {
                            directionInd.Hide();
                            //Time to wait is deppendable on avg FPS The Person should look about 3 to 5 Seconds in one Direction
                            
                            if(noOfVehiclesCurrent == 0) // no vehicles detected --> goot to go --> look to the other site
                            {
                                if(waitCounter == timeToWait)
                                {
                                    lookRight = true;
                                    lookLeft =  false;
                                }
                                else
                                {
                                    waitCounter++; // if no vehicles are detected the regular 3 seconds should be waited either way
                                }
                            } 
                            else if(noOfVehiclesCurrent > noOfVehiclesPast) //New Vehicle was detected
                            {
                                    waitCounter = 0;
                            }
                            else if(noOfVehiclesCurrent == noOfVehiclesPast) // nothing changed: either cars are standing still or are still dirving in field of view
                            {
                                //if number of Vehicles stays the same we have to find out if they are moving (perhaps some Vehicles are standing parked next to the road) --> check if the coordinates of the BoundingBoxes Change 
                                // since it does not work to create a Function for that we just create a function that takes 2 Lists of 2D arrays with X and Y Coordinates that 
                                // returns a Boolean wethere there are any moving Vehicles (Coordniates should Change every frame (maybe change later to every 5th frame for better stability & performance))
                                if(noOfVehiclesCurrent > 0)
                                {
                                    if(count%5==0)
                                    {
                                        foreach (BoundingBox box in boundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                currentFrameCoordinates.Add(a);
                                            }
                                        }
                                        foreach (BoundingBox box in prevBoundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                pastFrameCoordinates.Add(a);
                                            }
                                        }
                                        if(currentFrameCoordinates.Count == pastFrameCoordinates.Count)
                                        {
                                            if(areThereMovingObjects(currentFrameCoordinates,pastFrameCoordinates))//if there are moving Vehicles(change in Coordinates)
                                            {
                                            //reset waiting time we dont want to cross the street when there are still moving cars.
                                            waitCounter = 0;      
                                            }
                                            else
                                            {
                                                if(waitCounter >= timeToWait)  //if nothing is moving and the regular 3 seconds have been waited its time to go look on the other side
                                                {
                                                    lookRight = true;
                                                    lookLeft =  false;
                                                }
                                                waitCounter++; // if nothing is moving increase WaitCounter 
                                            }
                                        }
                                    }
                                    else
                                    {
                                        waitCounter++;
                                    }
                                }
                            }
                            else if(noOfVehiclesCurrent < noOfVehiclesPast) //less vehicles have been detected -> vehicles are driving out of the field of view
                            {
                                waitCounter = 0; //if ther are less Vehicles than before just w8 till number does no longer change or 0 Vehicles are Visible (Frame will not be counted as a valid Frame) 
                            }
                            
                            
                        }
                        else
                        {
                            //if user looks away from the Side he is supposed to look reset Time and also show direcional indeicator towards that point, This Should happen automatically since the Indicator is already shown if the anchorpoint is not within the field of view
                            waitCounter = 0;
                            directionInd.Show(leftPoint.transform.position);
                        }
                        
                        
                    }
                    // looking to the right
                    else if(!lookLeft && lookRight)
                    {
                        leftPoint.SetActive(false);
                        rightPoint.SetActive(true);
                        frontPoint.SetActive(false);
                        instruction.text = "Bitte schaue nach rechts";
                        if(isLookingInDirection("Right") == true)
                        {

                            //Time to wait is deppendable on avg FPS The Person should look about 3 to 5 Seconds in one Direction
                            directionInd.Hide();
                            if(noOfVehiclesCurrent == 0) // no vehicles detected --> goot to go --> look to the other site
                            {
                                if(waitCounter == timeToWait)
                                {
                                    lookRight = true;
                                    lookLeft =  true;
                                }
                                else
                                {
                                    waitCounter++; // if no vehicles are detected the regular 3 seconds should be waited either way
                                }
                            } 
                            else if(noOfVehiclesCurrent > noOfVehiclesPast) //New Vehicle was detected
                            {
                                    waitCounter = 0;
                            }
                            else if(noOfVehiclesCurrent == noOfVehiclesPast) // nothing changed: either cars are standing still or are still dirving in field of view
                            {
                                //if number of Vehicles stays the same we have to find out if they are moving (perhaps some Vehicles are standing parked next to the road) --> check if the coordinates of the BoundingBoxes Change 
                                // since it does not work to create a Function for that we just create a function that takes 2 Lists of 2D arrays with X and Y Coordinates that 
                                // returns a Boolean wethere there are any moving Vehicles (Coordniates should Change every frame (maybe change later to every 5th frame for better stability & performance)
                                if(noOfVehiclesCurrent > 0)
                                {
                                    if(count%5 == 0)
                                    {
                                        foreach (BoundingBox box in boundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                currentFrameCoordinates.Add(a);
                                            }
                                        }
                                        foreach (BoundingBox box in prevBoundingBoxes)
                                        {
                                            if(box.Confidence != 0)
                                            {
                                                x = (int)box.X;
                                                y = (int)box.Y;
                                                int[] a =  {x,y};
                                                pastFrameCoordinates.Add(a);
                                            }
                                        }
                                        if(currentFrameCoordinates.Count == pastFrameCoordinates.Count)
                                        {
                                            if(areThereMovingObjects(currentFrameCoordinates,pastFrameCoordinates))//if there are moving Vehicles(change in Coordinates)
                                            {
                                            //reset waiting time we dont want to cross the street when there are still moving cars.
                                            waitCounter = 0;      
                                            }
                                            else
                                            {
                                                if(waitCounter >= timeToWait)  //if nothing is moving and the regular 3 seconds have been waited its time to go look on the other side
                                                {
                                                    lookRight = true;
                                                    lookLeft =  true;
                                                }
                                                waitCounter++; // if nothing is moving increase WaitCounter 
                                            }
                                        }
                                    }
                                    else
                                    {
                                        waitCounter++;
                                    }
                                }
                            }
                            else if(noOfVehiclesCurrent < noOfVehiclesPast) //less vehicles have been detected -> vehicles are driving out of the field of view
                            {
                                waitCounter = 0; //if ther are less Vehicles than before just w8 till number does no longer change or 0 Vehicles are Visible (Frame will not be counted as a valid Frame) 
                            }
                            
                            
                        }
                        else
                        {
                            directionInd.Show(rightPoint.transform.position);
                            //if user looks away from the Side he is supposed to look reset Time and also show direcional indeicator towards that point, This Should happen automatically since the Indicator is already shown if the anchorpoint is not within the field of view
                            waitCounter = 0;
                        }
                        
                    }
                    //Ready to Cross with the Crooswalk since we have checked that ther are no moving cars
                    else if(lookRight && lookLeft)
                    {
                        processDone = true;
                        if(!speechManager.keywordRecognizer.IsRunning)
                        {   
                            speechManager.keywordRecognizer.Start();
                        }
                        frontPoint.SetActive(true);
                        leftPoint.SetActive(false);
                        rightPoint.SetActive(false);
                        if(isLookingInDirection("Front"))
                        {
                            directionInd.Hide();
                            instruction.text = "Du kannst die Straße nun überqueren";
                            finished.text = "Bitte bestätige mit 'Done', wenn du die Straße überquert hast";
                        }
                        else
                        {
                            directionInd.Show(frontPoint.transform.position);
                            instruction.text = "Bitte folge mit deinem Kopf dem Pfeil";
                        }
                        
                    }
                    

                }
                else if(crossStreetWithTrafficLight)
                {
                    // the easiest Part no need to worry about moving cars because they have to stop either way
                    // just wait till the traffficlight turns Green and keep the useres attention towards the trafficlight
                    if(!initializedAnchorPoints)
                    {
                        setAnchorPoints("Front");
                        initializedAnchorPoints = true;
                    }
                    frontPoint.SetActive(true);
                    leftPoint.SetActive(false);
                    rightPoint.SetActive(false);
                    if(!speechManager.keywordRecognizer.IsRunning)
                        {   
                            speechManager.keywordRecognizer.Start();
                        }
                    if(!trafficLightIsGreen)
                    {
                        if(isLookingInDirection("Front"))
                        {
                            directionInd.Hide();
                            instruction.text = "Bitte warte bis die Ampel Grün wird";
                            finished.text = "Bitte bestätige mit 'Yes', wenn die Ampel auf grün schaltet";
                        }
                        else
                        {
                            directionInd.Show(frontPoint.transform.position);
                            instruction.text = "Bitte schaue wieder zur Ampel";
                            finished.text ="";
                        }                      
                    }
                    else
                    {
                        processDone=true;
                        if(isLookingInDirection("Front"))
                        {
                            directionInd.Hide();
                            instruction.text = "Du kannst die Straße nun überqueren";
                            finished.text = "Bitte bestätige mit 'Done', wenn du die Straße überquert hast";
                        }
                        else
                        {
                            directionInd.Show(frontPoint.transform.position);
                            instruction.text = "Bitte folge mit deinem Kopf dem Pfeil";
                        }
                    }
                }
                else
                {
                    if(!speechManager.keywordRecognizer.IsRunning)
                    {
                        speechManager.keywordRecognizer.Start();
                    }
                    finished.text = "";
                    instruction.text = "Wenn du eine Straße überqueren möchtest, sage 'Street', sollte eine Ampel in der Nähe sein 'Trafficlight' und sollte ein Fußgängerüberweg in der Nähe sein 'Crosswalk'. Bitte stelle sicher, dass du zu beginn quer über die Straße schaust!";
                }
                count++;
            }
#endif
            yield return new WaitForSeconds(0.05f);
        }

        #region TapGestureHandler
        private void InitializeHandler()
        {
            // New recognizer class
            _gestureRecognizer = new GestureRecognizer();

            // Set tap as a recognizable gesture
            _gestureRecognizer.SetRecognizableGestures(GestureSettings.DoubleTap);

            // Begin listening for gestures
            _gestureRecognizer.StartCapturingGestures();

            // Capture on gesture events with delegate handler
            _gestureRecognizer.Tapped += GestureRecognizer_Tapped;

            Debug.Log("Gesture recognizer initialized.");
        }

  
        public void GestureRecognizer_Tapped(TappedEventArgs obj)
        {
            // Connect to socket on tapped event
            _tapCount += obj.tapCount;

            Debug.LogFormat("OnTappedEvent: tapCount = {0}", _tapCount);
            StartCoroutine(ConnectSocket());
        }

        void CloseHandler()
        {
            _gestureRecognizer.StopCapturingGestures();
            _gestureRecognizer.Dispose();
        }
        #endregion
        public void Street()
        {
            if(!crossStreet && !crossStreetWithCrossWalk && !crossStreetWithTrafficLight && !processDone)
            {
            crossStreet = true;
            initializedAnchorPoints = false;
            }
        }
        public void Done()
        {
            if((crossStreet || crossStreetWithCrossWalk || crossStreetWithTrafficLight) && processDone)
            {
                initializedAnchorPoints = false;
                crossStreet = false;
                crossStreetWithCrossWalk = false;
                crossStreetWithTrafficLight = false;
                trafficLightIsGreen = false;
                processDone = false;
                finished.text = "";
                instruction.text = "";
            }
        }
        public void Crosswalk() 
        {
            if(!crossStreet && !crossStreetWithCrossWalk && !crossStreetWithTrafficLight && !processDone)
            {
                crossStreetWithCrossWalk = true;
            }
        }

        public void TrafficLight() 
        {
            
            crossStreetWithTrafficLight = true;
        }
        public void Yes() 
        {
            if(!crossStreet && !crossStreetWithCrossWalk && crossStreetWithTrafficLight && !processDone)
            {
                trafficLightIsGreen = true;;
            }
           
        }
        // returns True if the device is currently looking into the correct Direction
        private Boolean isLookingInDirection(String direction)
        {
            if(direction == "Left")
            {
               if(leftPoint.active)
               {
                    //This returns true if LeftPoint is within the Field Of View (with a safe Feactor) Compare To https://docs.microsoft.com/de-de/windows/mixed-reality/develop/unity/tutorials/holograms-210 Stand 15.07.2021
                    return isInView(leftPoint);
               }
            }
            else if(direction == "Right")
            {
                if(rightPoint.active)
                {
                    return isInView(rightPoint);

                }
            }
            else if(direction == "Front")
            {
                if(frontPoint.active)
                {
                    return isInView(frontPoint);                  
                }
            }
            
            return false;
        }
        //returns true if angle between the target point and the Cameradirection (Straight forward) is less than 22deg 
        private Boolean isInView(GameObject point)
        {
            Vector3 targetViewportPosition = point.transform.position;
            Debug.Log(targetViewportPosition);
            Vector3 cameraPos = Camera.main.transform.position;
            Vector3 camToTarget = new Vector3(targetViewportPosition.x-cameraPos.x,targetViewportPosition.y - cameraPos.y,targetViewportPosition.z-cameraPos.z);
            Vector3 viewDirection = Camera.main.ViewportToWorldPoint(new Vector3(0,0,1));
            float angleAlpha = (float)Vector2.Angle(viewDirection,camToTarget);
            float maxAngle = 11f;

            if(angleAlpha < maxAngle && angleAlpha >-maxAngle)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        private Boolean areThereMovingObjects(List<int[]> current, List<int[]> past)
        {
            if(current.Count == past.Count)
            {
                for(int i=0; i <= current.Count; i++)
                {
                    if(!current[i].Equals(past[i])) //if the items in the List differ there are moving objects 
                    {
                        return true;
                    }
                }
            }
            else
            {
                return true;
            }
            return false;
        }
        //Activate the Anchorpoints and change their position so that only 1 is active at the time (which one deppends on the direction given Right/Left/Front)
        private void setAnchorPoints(String direction)
        {
            Vector3 forward = Camera.main.ViewportToWorldPoint(new Vector3(0,0,1));
            Vector3 left = Quaternion.Euler(0,-90,0) * forward;
            Vector3 right = Quaternion.Euler(0,90, 0) * forward;

            //Set Hologram position accordingly
            if(direction == "Left")
            {
                leftPoint.SetActive(true);
               // directionInd.Show(leftPoint.transform.position);
                rightPoint.SetActive(false);
                frontPoint.SetActive(false);
                //Sets the  Point relaitve to the Camera
                leftPoint.transform.SetPositionAndRotation(left,Quaternion.identity);
                
            }
            else if(direction == "Right")
            {
                leftPoint.SetActive(false);
                rightPoint.SetActive(true);
                directionInd.Show(rightPoint.transform.position);
               // frontPoint.SetActive(false);
                rightPoint.transform.SetPositionAndRotation(right,Quaternion.identity);
            }
            else if(direction == "Front")
            {
                
                leftPoint.SetActive(false);
                rightPoint.SetActive(false);
                frontPoint.SetActive(true);
                //directionInd.Show(frontPoint.transform.position);
                frontPoint.transform.SetPositionAndRotation(forward,Quaternion.identity);
            }
        }
        
    }

    public abstract class CvUtils
    {
        // Enum for selection of device type
        public enum DeviceTypeUnity
        {
            HL1 = 0,
            HL2 = 1
        }
    }

}





