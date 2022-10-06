#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    char cadena[100];
    
    printf("Introduce una cadena: ");
    for (size_t i = 0; i < 100; i++){
        cadena[i] = getchar();
        if (cadena[i] == '\n'){
            cadena[i] = '\0';
            break;
        }
    }

    char c;
    int counter = 0;
    for (size_t i = 0; i < 100; i++){
        c = cadena[i];
        if ((cadena[i] != '\0') && (0 == strcmp(&cadena[i], " ")) && (cadena[i] != '\t') && (cadena[i] != '\n') && (cadena[i] != EOF)){
            counter++;
        };
    }
    if (counter == 1){
        printf ("La cadena es vacía\n");
    } else {
        printf ("La cadena no es vacía\n");
    }

    return 0;
}