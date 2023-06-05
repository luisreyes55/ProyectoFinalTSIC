using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    // Use this for initialization
    public float score;
    public Text scoreText;

    //scoring parameters
    public float d;
    public Transform scoringLine;
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        scoreText.text ="SCORE\n"+score ;
	}
}
