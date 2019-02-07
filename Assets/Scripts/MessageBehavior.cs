using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MessageBehavior : MonoBehaviour {

	public TextMeshPro uiText;

    private Vector3 showScale = new Vector3(.06f, .03f, 1);
	private Vector3 desiredScale;

	private void Awake () {
        desiredScale = Vector3.zero;
	}

	private void Update () {
		transform.localScale = Vector3.Lerp (transform.localScale, desiredScale, 6F * Time.deltaTime);
	}

	public void ShowMessage (string message) {
		HideMessage ();
        desiredScale = showScale;
		uiText.text = message;
		if (DelayCoroutine != null) {
			StopCoroutine (DelayCoroutine);
		}
		DelayCoroutine = StartCoroutine (DelayHideMessage ());
	}

	Coroutine DelayCoroutine;
	IEnumerator DelayHideMessage () {
		yield return new WaitForSeconds (2f);
		HideMessage ();
		DelayCoroutine = null;
	}

	void HideMessage () {
		desiredScale = Vector3.zero;
		uiText.text = "";
	}
}
