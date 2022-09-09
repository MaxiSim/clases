#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
2) Escribir una función que dados dos números x e y imprima:

    - x es mayor que y, si x es mayor que y,
    - x y y son iguales, si los números son iguales.
*/

void comparar (float x, float y){
    if (x > y){
        printf("x es mayor que y\n");
    }
    else if (x == y){
        printf("x y y son iguales\n");
    }
    else{
        printf("x es menor que y");
    }
}

int main (void) {
    puts("x > y");
    comparar(1.1, 0.2);

    puts("x < y");
    comparar(1.1, 2.2);

    puts("x == y");
    comparar(1.1, 1.1);

    return EXIT_SUCCESS;
}
