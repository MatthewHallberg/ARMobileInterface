using System.Collections;
using TMPro;
using UnityEngine;

public class MessageBehavior : MonoBehaviour {

	public TextMeshPro uiText;

    private Vector3 showPosition = new Vector3(0f, .01f, .1f);
    private Vector3 hidePosition = new Vector3(0f, .05f, .1f);

    private Vector3 desiredPosition;

	private void Awake () {
        desiredPosition = hidePosition;
    }

	private void Update () {
		transform.localPosition = Vector3.Lerp (transform.localPosition, desiredPosition, 10f * Time.deltaTime);
	}

	public void ShowMessage (string message) {
		HideMessage ();
        desiredPosition = showPosition;
		uiText.text = message;
		if (DelayCoroutine != null) {
			StopCoroutine (DelayCoroutine);
		}
		DelayCoroutine = StartCoroutine (DelayHideMessage ());
	}

	Coroutine DelayCoroutine;
	IEnumerator DelayHideMessage () {
		yield return new WaitForSeconds (3f);
		HideMessage ();
        yield return new WaitForSeconds(3f);
        uiText.text = "";
        DelayCoroutine = null;
    }

    void HideMessage () {
        desiredPosition = hidePosition;
	}
}
