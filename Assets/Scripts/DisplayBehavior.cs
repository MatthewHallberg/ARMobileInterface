using UnityEngine;
using UnityEngine.Video;
using UnityEngine.Events;

public class DisplayBehavior : MenuElement {

    public MeshRenderer meshRenderer;
    public VideoPlayer videoPlayer;
    public GameObject loading;
    public GameObject selected;

    private void Start() {
        SetLoading(true);
    }

    public void LoadVideo(string url) {
        StartVideoPlayer();
        SetLoading(true);
        GetComponent<YouTubeAPI>().LoadVideo(url, () => SetLoading(false));
    }

    public void LoadWebsite(string name) {
        StopVideoPlayer();
        SetLoading(true);
        string url = "http://www." + name + ".com";
        GetComponent<WebsiteAPI>().LoadImage(url, () => SetLoading(false));
    }

    public void SetLoading(bool active) {
        loading.SetActive(active);
    }

    public void SetSelected(bool active) {
        selected.SetActive(active);
    }

    void StopVideoPlayer() {
        videoPlayer.Stop();
        videoPlayer.targetMaterialRenderer = null;
    }

    void StartVideoPlayer() {
        videoPlayer.targetMaterialRenderer = meshRenderer;
    }
}
