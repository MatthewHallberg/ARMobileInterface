using UnityEngine;
using UnityEngine.Video;

public class DisplayBehavior : MonoBehaviour {
    public MeshRenderer meshRenderer;
    public VideoPlayer videoPlayer;

    public void LoadVideo(string url) {
        StartVideoPlayer();
        GetComponent<YouTubeAPI>().LoadVideo(url);
    }

    public void LoadWebsite(string name) {
        StopVideoPlayer();
        string url = "http://www." + name + ".com";
        GetComponent<WebsiteAPI>().LoadImage(url);
    }

    void StopVideoPlayer() {
        videoPlayer.Stop();
        videoPlayer.targetMaterialRenderer = null;
    }

    void StartVideoPlayer() {
        videoPlayer.targetMaterialRenderer = meshRenderer;
    }
}
