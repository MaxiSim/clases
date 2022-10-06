#include <stdio.h>
#include <math.h>
// CLASE TEORICA 11/08/22

// Condicionales
void main(int i)
{
    if ((i < 20) && (i > 10))
    {
        puts("i esta entre 10 y 20");
    }

    if ((i < 10) || (i > 20))
    {
        puts("i esta fuera de los rangos");
    }

    if ( !((i < 20) && (i > 10)) )
    {
        puts("i no esta entre 10 y 20");
    }
}

void otro (void) 
{
    int i, entero, decimal;
    scanf("%i", &i);
    // El & se usa porque cuando el usuario ingresa un numero, tiene que tocar el enter para que guarde, 
    // entonces, cuando se le pasa a la funcion, se pasa un "10\n". 
    // Cuando pasa esto, el buffer se queda con lo que no sea un int. 
    // En este caso, se guarda el "\n". Si yo le paso "11.11\n", el scan lee el "11" y el ".11\n" se 
    // guarda en el buffer. Por eso, tengo que borrar el buffer cuando se queda con algo guardado. 
    
    scanf("%i.%i", &entero, &decimal);
    // El scan lee con formato, entonces si yo le paso "11.12\n", guarda 11 y 12, y deja el \n en el buffer. 
    // Cada vez que quiera volver a usar el buffer tengo que tener cuidado que no tenga cosas guardadas.
}

