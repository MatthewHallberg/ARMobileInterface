using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterfaceController : MonoBehaviour {
    public static InterfaceController Instance { get; private set; }

    void Awake() {
        Instance = this;
    }

    // Update is called once per frame
    void Update() {

    }
}
