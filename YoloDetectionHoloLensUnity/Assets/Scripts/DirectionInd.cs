using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
public class DirectionInd : MonoBehaviour
{

    [SerializeField] public Sprite arrowImg;
    [SerializeField]  public Sprite cricleImg;
    private Vector3 targetPosition;
    public float VisibilitySafeFactor = 0.05f;

    private RectTransform pointerRectTransform;
    private Image pointerImage;
    private Camera mainCam;
    private bool visible;
    void Awake()
    {
        mainCam = Camera.main;
        //targetPosition = gameObject.transform.position;
        pointerRectTransform = transform.Find("Pointer").GetComponent<RectTransform>();
        pointerImage =  transform.Find("Pointer").GetComponent<Image>();

        Hide();
        
        
    }

    // Update is called once per frame
    void Update()
    {

        //Set target and origin
        Vector3 to = targetPosition;
        Vector3 from = mainCam.transform.position;
        //Directional Vector
        Vector3 direction = (to - from).normalized;
        //angle on 2d of direction
        float angle = UtilsClass.GetAngleFromVectorFloat(direction);
        //turns Pointer towards the target
        pointerRectTransform.localEulerAngles = new Vector3(0,0,angle);
        
        //check if target is Visible
        Vector3 targetViewportPosition = mainCam.WorldToViewportPoint(targetPosition);
        
        Vector3 pointerWorldPosition = mainCam.ViewportToWorldPoint(new Vector3(0,0,0));
        pointerRectTransform.position = pointerWorldPosition;
        pointerRectTransform.localPosition = new Vector3(pointerRectTransform.localPosition.x, pointerRectTransform.localPosition.y, 0f);
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                            
    }
    public void Hide()
    {
        gameObject.SetActive(false);
        this.visible = false;
    }
    public void Show(Vector3 targetPosition)
    {
        gameObject.SetActive(true);
        this.targetPosition = targetPosition;
        this.visible = true;
    }
    public bool isVisible()
    {
        return this.visible;
    }
}
