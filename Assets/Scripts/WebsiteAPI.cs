using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class WebsiteAPI : MonoBehaviour {

    const string ENDPOINT = "www.matthewhallberg.com:12001/getImage";

    public MeshRenderer meshRenderer;

    public void LoadImage(string url){
        StartCoroutine(GetImageFromURL(url));
    }

    IEnumerator GetImageFromURL(string url) {
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
        }
    }
}
