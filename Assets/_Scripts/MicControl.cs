using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MicControl : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void MicStart() {
        Microphone.Start(null, true, 1, 16000);
    }

    public void MicStop()
    {
        Microphone.End(null);
    }
}
