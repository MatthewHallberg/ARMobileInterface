using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RotationalTracking : MonoBehaviour {

    Transform arCamera;
#if !UNITY_EDITOR
    // Use this for initialization
    void Start() {
        arCamera = Camera.main.transform;
        transform.position = arCamera.transform.position;
        transform.Rotate(Vector3.right, 90);
        Input.gyro.enabled = true;
    }

    // Update is called once per frame
    void Update() {
        Quaternion cameraRotation = new Quaternion(Input.gyro.attitude.x, Input.gyro.attitude.y, -Input.gyro.attitude.z, -Input.gyro.attitude.w);
        arCamera.transform.localRotation = cameraRotation;
    }
#endif
}