using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Video;
using System.Linq;

[System.Serializable]
public class VideoInfo {
    public string quality;
    public string url;
    public string itag;
    public string type;
}

[System.Serializable]
public class VideoInfoCollection {
    public VideoInfo[] videoInfoCollection;
}

[RequireComponent(typeof(VideoPlayer))]
public class YouTubeAPI : MonoBehaviour {

    const string API_ENDPOINT = "https://you-link.herokuapp.com/?url=";

    public string YouTubeURL;

    VideoPlayer videoPlayer;

    // Start is called before the first frame update
    void Start() {
        videoPlayer = GetComponent<VideoPlayer>();
        GetLink(YouTubeURL);
    }

    public void GetLink(string url) {
        StartCoroutine(GetYouTubeLinkRoutine(url));
    }

    IEnumerator GetYouTubeLinkRoutine(string url) {
        UnityWebRequest www = UnityWebRequest.Get(API_ENDPOINT + url);
        yield return www.SendWebRequest();
        //read json response into object
        VideoInfo[] videoArray = JsonUtility.FromJson<VideoInfoCollection>(
        "{\"videoInfoCollection\":" + www.downloadHandler.text + "}").videoInfoCollection;
        //find video link with desired quality
        VideoInfo videoInfo = videoArray.Where(
        item => item.quality == "medium" && item.type.Contains("mp4")).FirstOrDefault();
        videoPlayer.url = videoInfo.url;
        videoPlayer.Prepare();
        Debug.Log("Video Loaded");
    }
}
