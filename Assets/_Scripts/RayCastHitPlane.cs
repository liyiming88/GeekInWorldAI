using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.Interaction.Toolkit
{
    public class RayCastHitPlane : MonoBehaviour
    {

        public RaycastHit raycastHit;
        private Vector3 hitPoint;
        public float xaxis;

        // Start is called before the first frame update
        void Start()
        {
            raycastHit = default;
        }

        // Update is called once per frame
        void Update()
        {
            hitPoint = raycastHit.point;
            xaxis = hitPoint.x;
        }
    }
}

