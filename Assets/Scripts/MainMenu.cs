using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject objectToActivate;
    public void ActivateObject()
    {
        // Activar el GameObject
        objectToActivate.SetActive(true);
    }
    public void DisableObject()
    {
        // Desactivar el GameObject
        objectToActivate.SetActive(false);
    }
    public void EscenaJuego()
    {
        SceneManager.LoadScene("HouseMusic");
    }

    public void EscenaC()
    {
        SceneManager.LoadScene("C");
    }

    public void EscenaD()
    {
        SceneManager.LoadScene("D");
    }

    public void EscenaE()
    {
        SceneManager.LoadScene("E");
    }

    public void EscenaF()
    {
        SceneManager.LoadScene("F");
    }

    public void EscenaG()
    {
        SceneManager.LoadScene("G");
    }

    public void EscenaA()
    {
        SceneManager.LoadScene("A");
    }

    public void EscenaB()
    {
        SceneManager.LoadScene("B");
    }

    public void EscenaCS()
    {
        SceneManager.LoadScene("C#");
    }

    public void EscenaMelody()
    {
        SceneManager.LoadScene("Melody");
    }


}
