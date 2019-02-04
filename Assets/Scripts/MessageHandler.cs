using UnityEngine;

public class MessageHandler : MonoBehaviour {

    public DisplayBehavior display;

    private void OnEnable() {
        NetworkListener.resultRecieved += GotMesssage;
     }

    private void OnDisable() {
        NetworkListener.resultRecieved -= GotMesssage;
    }

    void GotMesssage(string message) {
        if (message.Contains("youtube")) {
            display.LoadVideo(message);
            return;
        }

        string[] words = message.Split(':');

        switch (words[0]) {
        case ("display"):
            Debug.Log(message);
            break;
        case ("website"):
            display.LoadWebsite(words[1]);
            break;
        case ("what"):
            Debug.Log(message);
            break;
        default:
            Debug.Log("Not found: " + message);
            break;
        }
    }

}
