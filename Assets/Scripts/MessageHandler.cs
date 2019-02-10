using UnityEngine;

public class MessageHandler : MonoBehaviour {

    public HudController hudController;
    public QueryBehavior queryBehavior;

    private void OnEnable() {
        NetworkListener.resultRecieved += GotMesssage;
     }

    private void OnDisable() {
        NetworkListener.resultRecieved -= GotMesssage;
    }

    void GotMesssage(string message) {
        Debug.Log(message);
        if (message.Contains("youtube")) {
            queryBehavior.DisplayQuery("Loading video...");
            if (hudController.currSelectedDisplay == null) return;
            hudController.currSelectedDisplay.LoadVideo(message);
            return;
        }

        string[] words = message.Split(':');

        switch (words[0]) {
        case ("display"):
            string action = words[1];
            if (action == "create") {
                hudController.CreateNewScreen();
                queryBehavior.DisplayQuery("Creating display");
            } else {
                int displayNum = int.Parse(words[2]);
                if (action == "select") {
                    hudController.SelectDisplayNum(displayNum);
                    queryBehavior.DisplayQuery("Selecting display: " + displayNum);
                } else if (action == "destroy") {
                    hudController.DestroyDisplayNum(displayNum);
                    queryBehavior.DisplayQuery("Destroying display: " + displayNum);
                }
            }
            break;
        case ("website"):
            string siteName = words[1];
            queryBehavior.DisplayQuery("Loading: " + siteName);
            if (hudController.currSelectedDisplay == null) return;
            hudController.currSelectedDisplay.LoadWebsite(siteName);
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
