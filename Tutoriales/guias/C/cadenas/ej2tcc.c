#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
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
    for (size_t i = 0; i < 100; i++){
        c = cadena[i];
        if (cadena[i] == '\0'){
            printf ("%zu           0\n", i);
            break;
        }
        printf ("%zu    %c    %d\n", i, c, c);
    }

    return 0;
}