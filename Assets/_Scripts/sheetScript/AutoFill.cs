using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AutoFill : MonoBehaviour
{
    public Sprite newSprite;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Fill() {
        GetComponent<Image>().sprite = newSprite;
    }
}
