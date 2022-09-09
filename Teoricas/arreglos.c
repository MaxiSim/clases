#include <stdio.h>
#include <stdlib.h>
#include <math.h>

                        // pos:      0   1   2   3
int v[4]; // Vector de 4 elementos |    |    |    |    |
                        // dir:    x0    0x4  0x8  0xC

int v[] = {17, 32, 9000, -3}; // Si defino un vector pero no especifico los elementos, cuando le agrego elementos por primera vez le
// determino el tamaño al vector. 
int v[50]; // Vector de 50 ceros. 
int v[50] = {17, 32, 9000, -3}; // Vector de 50 elementos con valores iniciales.
int v[50] = {0}; // Vector de 50 elementos con un valor inicial. 

// codigo ejemplo 


