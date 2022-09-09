#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
3) Escribir un programa que imprima la tabla de conversión de Celsius a Fahrenheit
 para los valores de 0ºC a 100ºC de 10 en 10 con 2 decimales.
*/

float CtoF (float C) {
    return (C*9/5)+32; 
}

int main (void){
    float c_temp;
    
    printf("| ** C ** | ** F ** |\n");
    printf("| ------: | ------: |\n");
    for (c_temp = 0; c_temp <= 100; c_temp += 10) {
        printf("| %7.2f | %7.2f |\n", c_temp, CtoF(c_temp));
    }
}

