using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using YoloDetectionHoloLens;


public class SpeechManager : MonoBehaviour
{
    public KeywordRecognizer keywordRecognizer;
    private Dictionary<string, System.Action> actions = new Dictionary<string, System.Action>();
   
    [SerializeField] public YoloDetection yoloDetection;

    //initialization
    void Start()
    {
        try
        {
            actions.Add("done", () => 
            {
                Done();
            });
            actions.Add("yes", () => 
            {
                Yes();
            });
            actions.Add("street", () => 
            {
                Street();
            });
            actions.Add("trafficlight", () => 
            {
                TrafficLight();
            });
            actions.Add("crosswalk", () => 
            {
                Crosswalk();
            });

            keywordRecognizer = new KeywordRecognizer(actions.Keys.ToArray());
            keywordRecognizer.OnPhraseRecognized += RecognizedSpeech;
        }
        catch(Exception e) {
            Debug.Log(e.Message);
        }
    
    }
     
    private void RecognizedSpeech(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if(actions.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }

    private void Done()
    {
        yoloDetection.Done();
    }

    private void Yes()
    {
       yoloDetection.Yes();
    }
    private void Street()
    {
       yoloDetection.Street();
    }
    private void TrafficLight()
    {
       yoloDetection.TrafficLight();
    }
    private void Crosswalk()
    {
       yoloDetection.Crosswalk();
    }
}
