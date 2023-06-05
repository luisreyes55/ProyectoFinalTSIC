using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Note : MonoBehaviour {

    //this is the speed of the movement of the note going down
    public float speed;
    //this is the name of the asigned note;
    public string _name="DO4";

    //this is the prefab stars particle when destroying
    public GameObject destroyParticles;

	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void FixedUpdate ()
    {
        transform.position -=new Vector3(0,speed*Time.fixedDeltaTime,0) ;
		
	}

    public void Particles()
    {
        GameObject.Instantiate(destroyParticles,transform.position,transform.rotation);
    }
}
