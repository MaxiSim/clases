#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
4) Escribir una función que dada una dimensión imprima la matriz identidad de esa dimensión.
*/

void imprimir_identidad (size_t n)
{
    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < n; j++){
            if (i == j){
                putchar('1');
            } else {
                putchar('0');
            }
        }
        putchar('\n');
    }
}

int main (void){
    puts("id 3x3");
    imprimir_identidad(3);
    
    puts("id 5x5");
    imprimir_identidad(5);
    
    return EXIT_SUCCESS;
}