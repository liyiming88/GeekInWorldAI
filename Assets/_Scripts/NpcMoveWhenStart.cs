using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NpcMoveWhenStart : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject xrOrigin;
    public float x_axix;
    public float z_axix;
    private bool alive = false;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void MovePosition()
    {
        if (!alive) { 
            alive = true;
            transform.Translate(xrOrigin.transform.position.x + x_axix, 0, xrOrigin.transform.position.z + z_axix);
        }
    }
}
