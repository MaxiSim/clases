#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int temp[6] = {0};
    int aux;
    int x;
    double var;
    double med;
    for (int i = 0; i < 6; i++){
        printf("Ingrese el valor [%i]:\n", i+1);
        scanf("%i", &aux);
        temp[i] = aux;
    }

    for (int i = 0; i < 6; i++){
        x += temp[i];
    }
    med = x/6;

    for (int i = 0; i < 6; i++){
        var += (pow((temp[i] - med),2))/6;
    }
    
    printf("la media de x es: %2.2f\n", med);
    printf("la varianza de x es: %2.2f\n", var);

    return 0;
}