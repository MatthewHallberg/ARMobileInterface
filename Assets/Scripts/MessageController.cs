using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageController : MonoBehaviour {
    public static MessageController Instance { get; private set; }

    void Awake() {
        Instance = this;

    }


}
