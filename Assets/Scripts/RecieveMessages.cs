using UnityEngine;
using System;
using System.Net.Sockets;
using System.Net;
using System.Collections;

public class RecieveMessages : MonoBehaviour {

    public delegate void OnMessageRecieved(string result);
    public static OnMessageRecieved messageRecieved;
    
    void Start() {
        // Create UDP client
        int receiverPort = 1998;
        UdpClient receiver = new UdpClient(receiverPort);
        receiver.BeginReceive(DataReceived, receiver);
    }

    // This is called whenever data is received
    private void DataReceived(IAsyncResult ar) {

        UdpClient c = (UdpClient)ar.AsyncState;
        IPEndPoint receivedIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
        Byte[] receivedBytes = c.EndReceive(ar, ref receivedIpEndPoint);

        //string packet = System.Text.Encoding.UTF8.GetString (receivedBytes, 0, 20);
        string currPacket = System.Text.Encoding.UTF8.GetString(receivedBytes);

        messageRecieved?.Invoke(currPacket);

        // Restart listening for udp data packages
        c.BeginReceive(DataReceived, ar.AsyncState);
    }
}