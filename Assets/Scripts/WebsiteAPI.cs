using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Events;

public class WebsiteAPI : MonoBehaviour {

    const string ENDPOINT = "http://www.matthewhallberg.com:12001/getImage";

    public MeshRenderer meshRenderer;

    public void LoadImage(string url, UnityAction callback){
        StartCoroutine(GetImageFromURL(url,callback));
    }

    IEnumerator GetImageFromURL(string url, UnityAction callback) {
        UnityWebRequest www = UnityWebRequest.Get(ENDPOINT);
        www.SetRequestHeader("head", url);
        yield return www.SendWebRequest();
        if (www.isNetworkError || www.isHttpError) {
            Debug.Log(www.error);
        } else {
            byte[] imageBytes = www.downloadHandler.data;
            Texture2D tempTex = new Texture2D(2, 2);
            tempTex.LoadImage(imageBytes);
            meshRenderer.material.mainTexture = tempTex;
            callback();
        }
    }
}
