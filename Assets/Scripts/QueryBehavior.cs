using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QueryBehavior : MonoBehaviour {

    public TextMeshPro queryText;
    public Animation anim;

    public void DisplayQuery(string query) {
        queryText.text = query;
        anim.Play();
    }

    public void DisplayMessage(string query) {
        queryText.text = query;
        anim.Play();
        StartCoroutine(PauseRoutine());
    }

    IEnumerator PauseRoutine() {
        yield return new WaitForSeconds(.5f);
        anim["queryRight"].speed = 0;
        yield return new WaitForSeconds(2f);
        anim["queryRight"].speed = 1;
    }
}
