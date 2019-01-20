using UnityEngine;
using System;
using System.Net.Sockets;
using System.Net;
using System.Collections;

public class RecieveMessages : MonoBehaviour {

    public delegate void OnMessageRecieved(string result);
    public static OnMessageRecieved messageRecieved;

    UdpClient receiver;

    string currMessage = String.Empty;

    void Start() {
        // Create UDP client
        int receiverPort = 1998;
        receiver = new UdpClient(receiverPort);
        receiver.BeginReceive(DataReceived, receiver);
    }

    void Update() {
        if (currMessage.Length > 0) {
            Debug.Log("Message recieved: " + currMessage);
            messageRecieved?.Invoke(currMessage);
            currMessage = string.Empty;
        }
    }

    private void OnApplicationQuit() {
        receiver.Close();
        receiver.Dispose();
    }

    // This is called whenever data is received
    private void DataReceived(IAsyncResult ar) {

        UdpClient c = (UdpClient)ar.AsyncState;
        IPEndPoint receivedIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
        Byte[] receivedBytes = c.EndReceive(ar, ref receivedIpEndPoint);

        //string packet = System.Text.Encoding.UTF8.GetString (receivedBytes, 0, 20);
        currMessage = System.Text.Encoding.UTF8.GetString(receivedBytes);

        // Restart listening for udp data packages
        c.BeginReceive(DataReceived, ar.AsyncState);
    }
}