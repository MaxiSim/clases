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
    printf ("La cadena es: %s", cadena);


    return 0;
}