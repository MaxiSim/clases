#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void set_cadena (char *cadena){
    printf("Introduce una cadena: ");
    for (size_t i = 0; i < 100; i++){
        cadena[i] = getchar();
        if (cadena[i] == '\n'){
            cadena[i] = '\0';
            break;
        }
    }
}

int len_cadena (char *cadena){
    int count = 0;
    for (size_t i = 0; i < 100; i++){
        if (cadena[i] == '\0'){
            break;
        }
        count += 1;
    }
    return count;
}

char * invertir (char *cadena){
    int len = len_cadena(cadena);
    char *cadena_invertida = malloc(len);
    for (size_t i = 0; i < len; i++){
        cadena_invertida[i] = cadena[len - i - 1];
    }
    return cadena_invertida;
}

void print_cadena (char *cadena){
    for (size_t i = 0; i < 100; i++){
        if (cadena[i] == '\0'){
            break;
        }
        printf ("%c", cadena[i]);
    }
    printf ("\n");
}

int main (void){
    char cadena[100];
    set_cadena(cadena);
    char *cadena_invertida = invertir(cadena);
    print_cadena(cadena_invertida);

    return 0;
}