using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hudController : MonoBehaviour {

    public MenuElement web;
    public MenuElement music;

    private void OnEnable() {
        RecieveMessages.messageRecieved += MessageRecieved;
    }

    private void OnDisable() {
        RecieveMessages.messageRecieved -= MessageRecieved;
    }

    public void MessageRecieved(string message) {
        Debug.Log("Got Message: " + message);
        switch (message) {
        case "web":
            web.ButtonPressed();
            break;
        case "music":
            music.ButtonPressed();
            break;
        default:
            Debug.Log(message + " not recognized");
            break;
        }
    }
}
