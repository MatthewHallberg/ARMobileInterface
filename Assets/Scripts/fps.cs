using UnityEngine;

public class fps : MonoBehaviour {

    public TextMesh text;

    readonly float updateInterval = 0.1F;
    float accum = 0; // FPS accumulated over the intervalint 
    int frames = 0; //Frames drawn over the interval
    float timeleft; // Left time for current interval

    void Start() {
        text = GetComponent<TextMesh>();
        timeleft = updateInterval;
    }

    void Update() {
        timeleft -= Time.deltaTime;
        accum += Time.timeScale / Time.deltaTime;
        ++frames;

        // Interval ended - update GUI text and start new interval
        if (timeleft <= 0.0) {
            // display two fractional digits (f2 format)
            float fps = accum / frames;
            text.text = fps.ToString("0");
            timeleft = updateInterval;
            accum = 0.0F;
            frames = 0;
        }
    }
}
