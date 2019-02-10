using UnityEngine;

public class MenuElement : MonoBehaviour {

    readonly float moveSpeed = 7f;
    Vector3 normalSize = new Vector3(1.5f, 1f, 1f);
    Vector3 desiredPosition;

    // Start is called before the first frame update
    void Awake() {
        PlaceDisplay();
    }

    void PlaceDisplay() {
        Transform mainCamera = Camera.main.transform;
        desiredPosition = mainCamera.forward * 2;
        transform.position = desiredPosition + new Vector3(0, 2, 0);
        transform.LookAt(mainCamera);
        Vector3 tempAngle = transform.eulerAngles;
        tempAngle.x = 0;
        tempAngle.y += 180;
        transform.eulerAngles = tempAngle;
    }

    // Update is called once per frame
    void Update() {
        transform.position = Vector3.Lerp(transform.position, desiredPosition, Time.deltaTime * moveSpeed);
    }
}
