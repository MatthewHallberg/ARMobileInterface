using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HudController : MonoBehaviour {

    [HideInInspector]
    public DisplayBehavior currDisplay;
    [HideInInspector]
    public DisplayBehavior currSelectedDisplay;
    [HideInInspector]
    public List<DisplayBehavior> displays = new List<DisplayBehavior>();

    public GameObject DisplayPrefab;
    public Transform InterfaceParent;
    public MenuElement earth;
    public EarthBehavior earthBehavior;

    void OnEnable() {
        RecieveMessages.messageRecieved += MessageRecieved;
    }

    void OnDisable() {
        RecieveMessages.messageRecieved -= MessageRecieved;
    }

    public void MessageRecieved(string message) {
        //first check if message is slider value
        if (int.TryParse(message, out int value)) {
            earthBehavior.SetAngle(value);
        } else {
            switch (message) {
            case "web":
                Debug.Log("Web");
                if (currDisplay != null) {
                    currDisplay.ToggleState();
                    earth.Close();
                } else {
                    CreateNewScreen();
                }
                break;
            case "arrow":
                //unparent screen here
                if (currDisplay != null) {
                    UnparentScreen();
                }
                break;
            case "earth":
                earth.ToggleState();
                if (currDisplay != null)
                    currDisplay.Close();
                break;
            default:
                Debug.Log(message + " not recognized");
                break;
            }
        }
    }

    void UnparentScreen() {
        currDisplay.UnParent();
        currSelectedDisplay = currDisplay;
        displays.Add(currSelectedDisplay);
        currDisplay = null;
    }

    void CreateNewScreen() {
        GameObject newDisplay = Instantiate(DisplayPrefab, InterfaceParent);
        currDisplay = newDisplay.GetComponent<DisplayBehavior>();
        currDisplay.startPosition = new Vector3(-.31f, .43f, .15f);
        currDisplay.Init();
        currDisplay.Open();
    }
}
