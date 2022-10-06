#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


struct inventario {
    char descripcion[30];
    int InvPartNum;
    float precio;
    int cantidad;
    int InvPos;
};

struct direccion {
    char pais[40];
    char provincia[30];
    char ciudad[20];
    char calle[30];
    char zip[10];
};

struct persona {
    char nombre[30];
    char apellido[30];
    int edad;
    struct direccion direccion;
};

struct registro {
    float km;
    float precio_combustible;
    float costo_de_recargas;
    time_t fecha;
    bool tanque_lleno;
    char comentario[100];
};

int main (void){
    return EXIT_SUCCESS;
}