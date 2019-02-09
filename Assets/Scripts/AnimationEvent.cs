using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class AnimationEvent : MonoBehaviour {

    public UnityEvent animationEvent;

    public void InvokeEvent() {
        animationEvent.Invoke();
    }
}
