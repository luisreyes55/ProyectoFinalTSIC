using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CS : MonoBehaviour
{
    // Use this for initialization
    //this is the canvas to instanciate the notes
    public Canvas canv;
    public GameObject note_prefab;

    public Transform DO3, RE3, MI3, FA3, SOL3, LA3, SI3, DO4, RE4, MI4, FA4, SOL4, LA4, SI4, DO5;
    public Transform DOs3, REs3, FAs3, SOLs3, LAs3, DOs4, REs4, FAs4, SOLs4, LAs4;

    // these are the two variables that create the notes and duration
    string[] melodyNotes;
    float[] melodyDuration;

    //this is the partiture speed
    public float partitureSpeed = 25;

    void Start()
    {
        // define the melody with the notes and durations
        melodyNotes = new string[] { "DOs3", "REs3", "FA3", "FAs3", "SOLs3", "LAs3", "DO4", "DOs4", "DOs4", "DO4", "LAs3", "SOLs3", "FAs3", "FA3", "REs3", "DOs3" };
        melodyDuration = new float[] { 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f };

        //this is used to know were to place the notes
        float cumulativeTime = 0.0f;

        //create the notes
        for (int i = 0; i < melodyNotes.Length; i++)
        {
            GameObject keyRef = GameObject.Find(melodyNotes[i]);

            //instanciate notes
            GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
            note.GetComponent<Note>()._name = melodyNotes[i];
            note.transform.SetParent(canv.transform);

            //set new time for the notes
            cumulativeTime += (float)melodyDuration[i];

            //Debug.Log(cumulativeTime);
        }


    }

    // Update is called once per frame
    void FixedUpdate()
    {

    }

}
