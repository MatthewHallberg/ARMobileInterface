using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuElement : MonoBehaviour {

    Vector3 startSize = Vector3.zero;
    Vector3 desiredScale = Vector3.zero;

    // Start is called before the first frame update
    void Start() {
        startSize = transform.localScale;
    }

    // Update is called once per frame
    void Update() {
        transform.localScale = Vector3.Lerp(transform.localScale, desiredScale, Time.deltaTime * 6f);
    }

    public void ButtonPressed() {
        if (desiredScale == startSize) {
            desiredScale = Vector3.zero;
        } else {
            desiredScale = startSize;
        }
    }
}
