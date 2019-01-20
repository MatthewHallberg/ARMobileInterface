using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hudController : MonoBehaviour {

    public MenuElement web;
    public MenuElement music;
    public MenuElement weather;
    public MenuElement earth;
    public ScreenShare screenShare;

    public EarthBehavior earthBehavior;

    void OnEnable() {
        RecieveMessages.messageRecieved += MessageRecieved;
    }

    void OnDisable() {
        RecieveMessages.messageRecieved -= MessageRecieved;
    }

    void DisableOtherWindows(string currName) {
        foreach (MenuElement element in FindObjectsOfType<MenuElement>()) {
            if (element.name != currName) {
                element.Close();
            }
        }
    }

    public void MessageRecieved(string message) {
        //first check if message is slider value
        if (int.TryParse(message, out int value)) {
            earthBehavior.SetAngle(value);
        } else {

            if (message == "arrow") {
                screenShare.ShareButtonPressed();
                return;
            }

            DisableOtherWindows(message);

            switch (message) {
            case "web":
                web.ToggleState();
                break;
            case "music":
                music.ToggleState();
                break;
            case "weather":
                weather.ToggleState();
                break;
            case "earth":
                earth.ToggleState();
                break;
            default:
                Debug.Log(message + " not recognized");
                break;
            }
        }
    }
}
