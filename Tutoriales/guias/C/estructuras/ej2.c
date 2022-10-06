#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct punto {
    int x;
    int y;
};

typedef struct punto Punto;

double euclidea (Punto p1, Punto p2){
    double distx = pow((p2.x - p1.x), 2);
    double disty = pow((p2.y - p1.y), 2);

    return sqrt(distx + disty);
}


int main (void){
    Punto p1;
    Punto p2;
    p1.x = 2; p1.y = 4;
    p2.x = 2; p2.y = 7;
    double a = euclidea(p1, p2);

    printf("La distancia euclidea entre p1 y p2 es de: %2.3f\n", a);
    return 0;
}