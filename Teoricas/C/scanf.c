#include <stdio.h>
#include <math.h>

// Validacion de inputs con scanf. 
int ejemplo1 (void)
{
    int entero = 90, decimal = 12, entero2 = 90, decimal2 = 12, v1, v2, v3;
    float i;
    puts("Ingrese un float: ");
    v1 = scanf("%f", &i);
    if (v1 == 1)
    {
        printf("El entero ingresado es %f\n", i);
    }
    else
    {
        printf("No ingreso un entero\n");
    }

    puts("Ingrese dos enteros separados por un .: ");
    v2 = scanf("%i.%i", &entero, &decimal);
    if (v2 == 2)
    {
        printf("El entero ingresado es %i\n", entero);
        printf("El decimal ingresado es %i\n", decimal);
    }
    else if (v2 == 1)
    {
        printf("El entero ingresado es %i\n", entero);
        printf("No ingreso un decimal\n");
    }
    else
    {
        printf("No ingreso ningun entero\n");
    }

    // Condicionales pero con switch en vez de if.: (solo funciona con enteros)

    switch (v3) {
        case 2: // Si v3 es 2, entonces...
            printf("El entero ingresado es %i\n", entero2);
            printf("El decimal ingresado es %i\n", decimal2);
            break;
        case 1: // Si v3 es 1, entonces...
            printf("El entero ingresado es %i\n", entero2);
            printf("No ingreso un decimal\n");
            break;
        default: // Si v3 no es 1 ni 2, entonces...
            printf("No ingreso ningun entero\n");
            break;
    }

    return 0;
}


