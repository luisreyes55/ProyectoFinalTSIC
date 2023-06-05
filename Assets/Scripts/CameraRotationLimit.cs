using System.Collections;
using System.Collections.Generic;
using UnityEngine; 
public class CameraRotationLimit : MonoBehaviour
{
    public float maxXRotation = 0.95f; // L�mite m�ximo de rotaci�n en el eje X
    public float minXRotation = -0.55f; // L�mite m�nimo de rotaci�n en el eje X
    public float maxYRotation = 0.275f; // L�mite m�ximo de rotaci�n en el eje Y
    public float minYRotation = 0.2f; // L�mite m�nimo de rotaci�n en el eje Y
    private void LateUpdate()
    {
        // Obtener las rotaciones actuales en los ejes X y Y
        float currentXRotation = transform.rotation.eulerAngles.x;
        float currentYRotation = transform.rotation.eulerAngles.y;

        // Limitar la rotaci�n en el eje X
        if (currentXRotation > 180f)
            currentXRotation -= 360f;

        currentXRotation = Mathf.Clamp(currentXRotation, minXRotation, maxXRotation);

        // Limitar la rotaci�n en el eje Y
        if (currentYRotation > 180f)
            currentYRotation -= 360f;

        currentYRotation = Mathf.Clamp(currentYRotation, minYRotation, maxYRotation);

        // Aplicar la nueva rotaci�n limitada
        transform.rotation = Quaternion.Euler(currentXRotation, currentYRotation, 0f);
    }
}
