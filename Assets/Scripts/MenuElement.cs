using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MenuElement : MonoBehaviour {

    public UnityEvent StartEvent;
    public UnityEvent EndEvent;

    Vector3 startSize = Vector3.zero;
    Vector3 desiredScale = Vector3.zero;
    Vector3 startPosition;
    Vector3 desiredPosition;
    float moveSpeed = 7f;

    // Start is called before the first frame update
    void Start() {
        startPosition = transform.localPosition;
        desiredPosition = startPosition;
        desiredPosition.y = 0;
        startSize = transform.localScale;
        EndEvent.Invoke();
    }

    // Update is called once per frame
    void Update() {
        transform.localScale = Vector3.Lerp(transform.localScale, desiredScale, Time.deltaTime * moveSpeed);
        transform.localPosition = Vector3.Lerp(transform.localPosition, desiredPosition, Time.deltaTime * moveSpeed);
    }

    public void ButtonPressed() {
        if (desiredScale == startSize) {
            desiredScale = Vector3.zero;
            desiredPosition.y = 0;
            moveSpeed = 11f;
            EndEvent.Invoke();
        } else {
            desiredScale = startSize;
            desiredPosition = startPosition;
            moveSpeed = 7f;
            StartEvent.Invoke();
        }
    }
}
