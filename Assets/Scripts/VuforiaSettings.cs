using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using Vuforia;

public class VuforiaSettings : MonoBehaviour {
    void Start() {
        Application.targetFrameRate = 60;
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    private void OnDisable() {
        VuforiaARController.Instance.UnregisterVuforiaStartedCallback(OnVuforiaStarted);
    }

    void OnVuforiaStarted() {
        StartCoroutine(DelaySetupRoutine());
    }

    IEnumerator DelaySetupRoutine() {
        CameraDevice.Instance.SetFocusMode(CameraDevice.FocusMode.FOCUS_MODE_TRIGGERAUTO);
        yield return new WaitForEndOfFrame();
        Debug.Log("SETTING Viewer AR mode");
        MixedRealityController.Instance.SetMode(MixedRealityController.Mode.VIEWER_AR);
    }
}
