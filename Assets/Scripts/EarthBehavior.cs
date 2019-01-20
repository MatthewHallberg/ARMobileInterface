using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarthBehavior : MonoBehaviour {

    Vector3 desiredAngle = Vector3.zero;
    float tempAngle = 0;

    private void Update() {
        desiredAngle.y = Mathf.LerpAngle(desiredAngle.y, tempAngle, Time.deltaTime * 7f);
        transform.localEulerAngles = desiredAngle;
    }

    public void SetAngle(int angle) {
        tempAngle = angle;
    }
}
