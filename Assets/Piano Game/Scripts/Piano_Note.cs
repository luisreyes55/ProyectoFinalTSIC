using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piano_Note : MonoBehaviour {

    // Use this for initialization

    //this is the defaut audio source attached to the object
    AudioSource audioS;
    //this is used to delay or advance the sound of the key/note
    public float delay=0.1f;
    //this is used to get the initialposition of the object
    Vector3 posInit;
    // movement of the key distance
    public float distKey = 50;
    //name of the note
    public string _name;

    private float softFactorTrans = 0.05f;
    private float softFactor = 0f;

    //THIS IS THE REFERENCE FOR THE SCORING, and the scoring distance d;
    public Score sc;

    
	void Start ()
    {
        //inicialization of variables
        audioS = transform.GetComponent<AudioSource>();
        posInit = transform.localPosition;
        _name = transform.gameObject.name;
    }
	
	// Update is called once per frame
	void Update () {
        
    }

    public void playTone()
    {
        //we set the time to the delay and we play the sound
        

        if (audioS.isPlaying)
        {
            StopAllCoroutines();
            StartCoroutine(TransitionToPlayNoteSoft());
        }
        else
        {
            StartCoroutine(PlayNoteSoft());
        }
        //we move the key to simulate keypress
        StartCoroutine(MoveKey());

        // we check which note corresponds to to this value of note
        CheckNotePosition();
    }

    // this simulates the user pressing the key
    IEnumerator MoveKey()
    {
        for (float teta=0;teta<=Mathf.PI; teta+=Mathf.PI/10)
        {
            //this is the movement of the key
            transform.localPosition = new Vector3(posInit[0], posInit[1]- distKey*Mathf.Sin(teta), posInit[2]);

            //yield return new WaitForSeconds(.01f);
            yield return null;
        }

        transform.localPosition = posInit;
    }

    //soft evolution of sound (prevent glitch noise)
    IEnumerator PlayNoteSoft()
    {
        audioS.time = delay;
        audioS.Play();

        float t = 0;
        while (t < softFactor)
        {
            audioS.volume = t / softFactor;

            t += Time.deltaTime;
            yield return null;
        }       

        
    }

    //soft evolution of sound (prevent glitch noise)
    IEnumerator TransitionToPlayNoteSoft()
    {
        float t = (1-audioS.volume)*softFactorTrans;
        while (t < softFactorTrans)
        {
            audioS.volume = 1-t / softFactorTrans;

            t += Time.deltaTime;
            yield return null;
        }
        
        audioS.volume = 1;

        audioS.time = delay;
        audioS.Play();

    }

    //this get the position of the note and destroys it when the key is touched
    void CheckNotePosition()
    {
        GameObject[] go = GameObject.FindGameObjectsWithTag("note");

        //tes for each go

        for (int ii=0;ii<go.Length;ii++)
        {
            if (go[ii] != null)
            {
                if (go[ii].GetComponent<Note>()._name == _name)
                {
                    //this manages the scoring
                    int scr = CalculateScore(go[ii].transform.position[1], sc.scoringLine.position[1]);
                    sc.score += scr;

                    //destroy note
                    go[ii].GetComponent<Note>().Particles();
                    Destroy(go[ii]);

                    return;
                }
            }
        }
    }

    int CalculateScore(float x, float r)
    {
        int scr = 0;

        if(x-r>0 && x-r<=sc.d)
        {
            scr = (int) (-10 / sc.d *x +10+10 / sc.d *r);

        }
        else if (x - r < 0 && x-r >= -sc.d)
        {
            scr = (int)(10 / sc.d * x +10- 10 / sc.d * r);
        }


            return scr;
    }


}
