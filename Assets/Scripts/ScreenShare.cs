using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class ScreenShare : MonoBehaviour {

    Transform desiredTransform;
    float moveSpeed = 7f;
    Vector3 desiredPosition;

    public void ShareButtonPressed() {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity)) {
            if (hit.collider.CompareTag("screen")) {
                Debug.Log("hit screen");
                foreach(MenuElement element in FindObjectsOfType<MenuElement>()) {
                    if (element.isOpen && element.name != "earth") {
                        print("share Screen");
                        //move object
                        desiredPosition = hit.point;
                        desiredTransform = element.transform;
                        element.MoveToScreen();
                        DisplayBehavior display = hit.collider.GetComponent<DisplayBehavior>();
                        if (element.name == "music") {
                            VideoPlayer player = element.transform.GetChild(0).GetComponent<VideoPlayer>();
                            display.SetDisplay(player);
                        } else {
                            Sprite sprite = element.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite;
                            display.SetDisplay(sprite);
                        }
                        break;
                    }
                }
            }
        }
    }

    private void Update() {
        if (desiredTransform != null) {
            desiredTransform.localScale = Vector3.Lerp(desiredTransform.localScale, Vector3.zero, Time.deltaTime * moveSpeed);
            desiredTransform.position = Vector3.Lerp(desiredTransform.position, desiredPosition, Time.deltaTime * moveSpeed);
            if (desiredTransform.localScale.x < .05f) {
                desiredTransform.localScale = Vector3.zero;
                desiredTransform = null;
            }
        }
    }
}
