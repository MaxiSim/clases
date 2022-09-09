#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
5) El algoritmo babilonio para calcular la raíz cuadrada de un número n consta de los siguientes pasos:

    a) Se propone que el resultado de la raíz x vale un valor arbitrario, por ejemplo n.
    b) Se inicializa y en 1.
    c) Mientras que la diferencia entre  e  sea superior a nuestro margen de error:
        i)  El nuevo valor de  se calcula como el promedio entre  e .
        ii) El nuevo valor de  se calcula como .
Implementar una función que calcule la raíz cuadrada de  según este método.
*/

float n = 28;
float x = 3;
float margin = 0.00001;

float raiz_cuadrada ( float n , float x , float margin);

int main (void) 
{
    float raiz = raiz_cuadrada(n , x, margin);
    printf("La raiz cuadrada de %f es %f\n", n, raiz);
    return 0;
}

float raiz_cuadrada(float n, float x, float margin)
{
    float y = 1;
    do {
        x = (x + y)/2;
        y = n/x;
    } while (fabs(x - y) > margin);
    return x;
}