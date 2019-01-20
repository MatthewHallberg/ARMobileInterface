using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hudController : MonoBehaviour {

    public MenuElement web;
    public MenuElement music;
    public MenuElement weather;

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
                print(element.name);
            }
        }
    }

    public void MessageRecieved(string message) {
        Debug.Log("Got Message: " + message);
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
        default:
            Debug.Log(message + " not recognized");
            break;
        }
    }
}
