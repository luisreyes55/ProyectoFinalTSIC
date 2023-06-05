using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAfterTime : MonoBehaviour {


    //time to destroy
    public float dTime;

	// Use this for initialization
	void Start () {
        Destroy(gameObject,dTime);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
