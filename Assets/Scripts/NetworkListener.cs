using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class NetworkListener : MonoBehaviour {

    const string SERVER_ADDRESS = "http://matthewhallberg.com";
    const string PORT_NUM = "3000";

    readonly string address = SERVER_ADDRESS + ':' + PORT_NUM;

    public delegate void OnResultRecieved(string result);
    public static OnResultRecieved resultRecieved;

    // Start is called before the first frame update
    void Start() {
        StartCoroutine(ListenRoutine());
    }

    //constantly ping server for new data
    IEnumerator ListenRoutine(){
        while (true) {
            UnityWebRequest www = UnityWebRequest.Get(address);
            www.SetRequestHeader("head", "unity");
            yield return www.SendWebRequest();
            if (www.isNetworkError || www.isHttpError) {
                Debug.Log(www.error);
            } else {
                string message = www.downloadHandler.text;
                if (message.Length > 0) {
                    resultRecieved?.Invoke(message);
                }
            }
           yield return new WaitForSeconds(.5f);
        }
    }
}
