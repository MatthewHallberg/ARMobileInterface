using UnityEngine;

public class MenuElement : MonoBehaviour {

    [HideInInspector]
    public Vector3 startPosition = new Vector3(-.351f,.025f,-.198f);

    Vector3 startSize = new Vector3(.2f, .2f, .2f);
    Vector3 desiredScale = Vector3.zero;
    Vector3 desiredPosition;
    float moveSpeed = 7f;

    // Start is called before the first frame update
    void Awake() {
        Init();
    }

    public void Init() {
        desiredPosition = startPosition;
        desiredPosition.y = 0;
        desiredScale = Vector3.zero;
        transform.localPosition = desiredPosition;
        transform.localScale = desiredScale;
    }

    // Update is called once per frame
    void Update() {
        transform.localScale = Vector3.Lerp(transform.localScale, desiredScale, Time.deltaTime * moveSpeed);
        transform.localPosition = Vector3.Lerp(transform.localPosition, desiredPosition, Time.deltaTime * moveSpeed);
    }

    public void Close() {
        desiredScale = Vector3.zero;
        desiredPosition.y = 0;
        moveSpeed = 11f;
    }

    public void Open() {
        desiredScale = startSize;
        desiredPosition = startPosition;
        moveSpeed = 7f;
    }

    public void ToggleState() {
        if (desiredScale == startSize) {
            Close();
        } else {
            Open();
        }
    }
}
