// En los encabezados tengo que poner las declaraciones de 'Include' de un archivo. El '.h' es el encabezado y la libreria es todo.
// El include funciona como un copy/paste de un archivo en otro. Con las librerias estoy trayendo todo el codigo
// que quiero y lo puedo usar en mi archivo.
// El include no lo lee el compilador, sino que lo lee el preprocesador.

// Si un archivo se incluye a si mismo, se arma una recursion. 
// Poninendo 'pragma once' en el encabezado, evita que se incluya un archivo dos veces.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Aca iria un '#include "funciones.c"'

// Toda esta parte del encabezado iria en otro archivo. "funciones.h"
float fsuma (float, float);
float fresta (float, float);
float fmult(float, float);
float fdiv (float, float);
float distancia (float, float, float, float);
// hasta aca

int main(void){
    float a, b;
    float r;

    puts("Ingresá (a, b)");
    scanf ("(%f %f)", &a, &b);

    r = fsuma (a, b);
    printf("El resultado de fsuma(%f, %f) es %f\n", a, b, r);
    return EXIT_SUCCESS;
}

// Se puede crear un archivo con las funciones por separado, y luego incluirlo al llamar al compilador. 
// Ahi puedo usar las funciones del archivo de funciones, en mi archivo principal.
// Funciona parecido al import en python, pero lo tengo que hacer desde la terminal. 
// $ gcc -c funciones.c -o funciones.o
// $ gcc -c main.c -o main.o
// $ gcc -c main.o funciones.o -o programa

// aca empieza el 'funciones.c'
// Tambien puedo armar el encabezado con mis funciones en un archivo aparte, y luego incluirlo dentro de mi archivo principal.
// #include "funciones.h"

float fsuma (float a, float b){
    return a + b;
}
float fresta (float a, float b){
    return a - b;
}
float fmult (float a, float b){
    return a * b;
}
float fdiv (float a, float b){
    return a / b;
}

float distancia (float x1, float y1, float x2, float y2){
    float dy = fresta(y2, y1);
    float dx = fresta(x2, x1);

    return sqrt(dy * dy + dx * dx);
}