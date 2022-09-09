#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Ciclos con for 
// Iteraciones:

// Tipos signados:
// Poniendo signed o unsigned antes de un tipo, define si toma o no diferentes signos.
int main (void) 
{
    unsigned int n;  
    float nota; 
    float suma = 0;
    float promedio = 0; 
    int aux;
    bool valid;

// Ciclos con do y while
    do {
        valid = true;
        printf("Ingrese la cantidad de notas: ");
        aux = scanf("%i", &n);
        if (aux != 1) {
            printf("Error, ingrese un numero de notas valido\n");
            valid = false;
        }
        while (getchar() != '\n'){// Limpiar el buffer de entrada.))
            valid = false;
        } 
        if ((n == 0) && valid){
            printf("Ingresaste 0\n");
            return EXIT_FAILURE;
        }
    } while(valid = true);

// Ciclos con for y while 
    printf("Ingrese la cantidad de notas: ");
    aux = scanf("%i", &n);
    if (aux != 1) {
        printf("Error, ingrese un numero de notas valido\n");
        return EXIT_FAILURE; // error  Es lo mismo que devolver un 1. Indica al SO que el programa fallo.
    }
    while (getchar() != '\n'){// Limpiar el buffer de entrada.))
        printf("Error, ingresó algo que no era un numero\n");
        return EXIT_FAILURE;
    } 
    if (n == 0) {
        printf("No quisiste ingresar nada\n");
        return EXIT_SUCCESS;
    }

    for (size_t i = 0; i < n; i++) { //size_t es un tipo de dato que representa un numero sin signo de 32 bits.
        aux = scanf("%i", &nota);
        if (aux != 1) {
            printf("Error, ingrese una nota valida\n");
            return EXIT_FAILURE; // error  Es lo mismo que devolver un 1. Indica al SO que el programa fallo.
        }
        while (getchar() != '\n'){// Limpiar el buffer de entrada.))
        }
        suma += nota;
    }
    promedio = suma / n;
    printf("El promedio de %i notas es: %.4f\n", n, promedio);

    return EXIT_SUCCESS; // 0 indica que el programa termino con exito.

}