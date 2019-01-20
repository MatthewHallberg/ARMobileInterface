using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Video;

public class MenuElement : MonoBehaviour {

    public UnityEvent StartEvent;
    public UnityEvent EndEvent;

    [HideInInspector]
    public bool isOpen = false;

    Vector3 startSize = Vector3.zero;
    Vector3 desiredScale = Vector3.zero;
    Vector3 startPosition;
    Vector3 desiredPosition;
    float moveSpeed = 7f;
    bool moveLocal = true;


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
        if (moveLocal) {
            transform.localScale = Vector3.Lerp(transform.localScale, desiredScale, Time.deltaTime * moveSpeed);
            transform.localPosition = Vector3.Lerp(transform.localPosition, desiredPosition, Time.deltaTime * moveSpeed);
        }
    }

    public void MoveToScreen() {
        moveLocal = false;
    }

    public void Close() {
        moveLocal = true;
        isOpen = false;
        desiredScale = Vector3.zero;
        desiredPosition.y = 0;
        moveSpeed = 11f;
        //BUG FIX: if display is showing video dont pause
        if (EndEvent.GetPersistentEventCount() > 0) {
            Transform child = transform.GetChild(0);
            VideoPlayer video = child.GetComponent<VideoPlayer>();
            MeshRenderer meshRenderer = child.GetComponent<MeshRenderer>(); 
            if (video.targetMaterialRenderer == meshRenderer) {
                EndEvent.Invoke();
            }
        }
    }

    public void Open() {
        moveLocal = true;
        isOpen = true;
        desiredScale = startSize;
        desiredPosition = startPosition;
        moveSpeed = 7f;
        StartEvent.Invoke();
    }

    public void ToggleState() {
        if (desiredScale == startSize) {
            Close();
        } else {
            Open();
        }
    }
}
