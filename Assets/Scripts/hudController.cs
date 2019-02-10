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

    public void SelectDisplayNum(int num) {
        if (displays.Count < num) return;
        ActivateDisplay(displays[num - 1]);
    }

    void ActivateDisplay(DisplayBehavior desiredDisplay) {
        currSelectedDisplay = desiredDisplay;
        foreach (DisplayBehavior display in FindObjectsOfType<DisplayBehavior>()) {
            if (display == desiredDisplay) {
                display.SetSelected(true);
            } else {
                display.SetSelected(false);
            }
        }
    }

    public void DestroyDisplayNum(int num) {
        if (displays.Count < num) return;
        DisplayBehavior desiredDisplay = displays[num - 1];
        displays.Remove(desiredDisplay);
        //if this display is active activate another one
        if (desiredDisplay.selected.activeSelf) {
            currSelectedDisplay = null;
            if (displays.Count > 0) {
                ActivateDisplay(displays[0]);
            }
        }
        Destroy(desiredDisplay.gameObject);
    }

    public void CreateNewScreen() {
        GameObject newDisplay = Instantiate(DisplayPrefab);
        DisplayBehavior display = newDisplay.GetComponent<DisplayBehavior>();
        displays.Add(display);
        currSelectedDisplay = display;
        ActivateDisplay(currSelectedDisplay);
    }
}
