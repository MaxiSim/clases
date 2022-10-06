#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
5)  Escribir un programa que calcule las 2 raíces de un polinomio de segundo grado (de la forma ax^2 + bx + c). 
    Validar las operaciones a realizar (no dividir por cero ni calcular la raíz de un número negativo, o imprimir la raíz compleja).
*/

int main (void)
{
    float a, b, c;
    float r1, r2;
    float discriminante;
    // Ingreso de datos
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    // Validacion de datos
    if (a == 0){
        printf("No es una cuadratica\n");
        if (b != 0){
            printf("La raiz es: %f\n", -c / b);
        }
    }
    // Calculo de datos
    discriminante = b * b - 4 * a * c;
    if (discriminante < 0){
        printf("Raices complejas\n");
    } else if (discriminante == 0) {
        printf("Raiz real doble\n");
        r1 = r2 = -b / (2 * a);
    } else {
        discriminante = sqrt(discriminante) / (2 * a);
        r1 = r2 = -b / (2 * a);
        r1 += discriminante;
        r2 -= discriminante;
        printf("Raices reales\n");
    }

    return EXIT_SUCCESS;
}