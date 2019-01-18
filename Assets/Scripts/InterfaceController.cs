using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterfaceController : MonoBehaviour {

    public void GenericButtonDown(string name) {
        SendMessages.Instance.SendPacket(name);
    }

    public void SliderValueChanged(float val) {
        SendMessages.Instance.SendPacket(val.ToString());
    }
}
