#include <stdio.h>
// Ciclos

int main (void) {
    float i; 
    int entero, decimal; 
    char c; 

    puts("Ingrese un float: ");
    scanf("%f", &i);
    printf("El entero ingresado es %f\n", i);
    while (getchar() != '\n') { // esto lo que hace es borrar el buffer. 
    }


    puts("Ingrese dos enteros separados por un .: ");
    scanf("%i.%i", &entero, &decimal);
    
    return 0;
}

int otro (void) {
    int entero, decimal;
    float i, j; 
    char c;

    puts("Ingrese un float: ");
    scanf("%i", &i);
    printf ("el float: '%c'\n", c); 

    c = getchar();
    printf("el char: '%c'\n", c);

    j = 0; 
    for (j = 0; j < 10; j++) { //creo que el codigo que hizo era asi.
        printf("%i\n", j);
    }
    
    return 0;
}