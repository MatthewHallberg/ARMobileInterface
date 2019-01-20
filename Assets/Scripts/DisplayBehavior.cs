using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class DisplayBehavior : MonoBehaviour {
    public MeshRenderer meshRenderer;

    VideoPlayer lastPlayer;

    private void Start() {
        meshRenderer.gameObject.SetActive(false);
    }

    public void SetDisplay(VideoPlayer player) {
        lastPlayer = player;
        player.targetMaterialRenderer = meshRenderer;
        meshRenderer.gameObject.SetActive(true);
    }

    public void SetDisplay(Sprite sprite) {
        if (lastPlayer != null) lastPlayer.targetMaterialRenderer = null;
        meshRenderer.material.mainTexture = sprite.texture;
        meshRenderer.gameObject.SetActive(true);
    }
}
