#include <stdio.h>
#include <stdlib.h>


int main (){
    float temp_mensuales[12] = {0.0F};
    float aux;
    for (int i = 0; i < 12; i++){
        printf("Ingrese el valor [%i]:\n", i+1);
        scanf("%f", &aux);
        temp_mensuales[i] = aux;
    }
    
    printf("[");
    for (int i = 0; i < 12; i++){
        printf("%2.1f, ", temp_mensuales[i]);
    }
    printf("]");
    return 0;
}