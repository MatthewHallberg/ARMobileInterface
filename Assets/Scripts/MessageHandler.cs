using UnityEngine;

public class MessageHandler : MonoBehaviour {

    public HudController hudController;

    private void OnEnable() {
        NetworkListener.resultRecieved += GotMesssage;
     }

    private void OnDisable() {
        NetworkListener.resultRecieved -= GotMesssage;
    }

    void GotMesssage(string message) {
        if (message.Contains("youtube")) {
            hudController.currSelectedDisplay.LoadVideo(message);
            return;
        }

        string[] words = message.Split(':');

        switch (words[0]) {
        case ("display"):
            Debug.Log(message);
            break;
        case ("website"):
            hudController.currSelectedDisplay.LoadWebsite(words[1]);
            break;
        case ("what"):
            GetComponent<Classification>().ProcessImage();
            break;
        default:
            Debug.Log("Not found: " + message);
            break;
        }
    }

}
