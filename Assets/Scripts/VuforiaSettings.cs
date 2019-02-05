using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class VuforiaSettings : MonoBehaviour {
    void Start() {
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    private void OnDisable() {
        VuforiaARController.Instance.UnregisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    void OnVuforiaStarted() {
        StartCoroutine(DelaySetupRoutine());
    }

    IEnumerator DelaySetupRoutine() {
        yield return new WaitForSeconds(.5f);
        Debug.Log("SETTING Viewer AR mode");
        MixedRealityController.Instance.SetMode(MixedRealityController.Mode.VIEWER_AR_DEVICETRACKER);
    }
}
