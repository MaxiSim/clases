#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1)  Escribir las definiciones siguientes:

        a) Un arreglo de enteros con 15 elementos, todos ellos de valor 0.
        b) Un arreglo de 7 doubles, todos ellos de valor 3.0.
        c) Un arreglo de SIZE floats, todos ellos de valor 0.
        d) Un arreglo de 4 enteros con los valores: 3, 2, 0, 9.
        e) Un arreglo de 4 caracteres con los valores: 'h', 'o', 'l', 'a'.
        f) Un arreglo de 4 caracteres con los valores: 104, 111, 108, 97.
        g) Un arreglo con SIZE elementos de algún tipo (bool, int, float, double, etc) y lo inicialice con valores aleatorios.
    Imprimir todos los arreglos creados y la suma de sus elementos.
*/
int X = 1;
int Y = 15;
int matGet(int m[X][Y], int row, int col);
int matSet(int m[X][Y], int row, int col, int val);
void matShow(int m[X][Y], int rows, int cols);

// Funca
int a (void) 
{
    int mat[X][Y];
    int j = 0;
    int x = 0, y = 0;
    for (x = 0; x < X; x++) {
        for (y = 0; y < Y; y++) {
            matSet(mat, x, y, j);
        }
    }
    matShow( mat, X, Y);
    return 0;
}

// No me sale
double b ()
{
    int mat[X][Y];
    int j = 3.0;
    int x = 0, y = 0;
    for (x = 0; x < X; x++) {
        for (y = 0; y < Y; y++) {
            matSet(mat, x, y, j);
        }
    }
    matShow( mat, X, Y);
    return 0;

}

int main (void)
{
    a();
    // b();
    
    return 0;
}

int matSet (int m[X][Y], int row, int col, int val) {
    return m[row][col] = val;
}

int matGet (int m[X][Y], int row, int col) {
    return m[row][col];
}

void matShow (int m[X][Y], int rows, int cols) {
    int x = 0, y = 0;
    for (x = 0; x < X; x++) {
        for (y = 0; y < Y; y++) {
            printf("%d ", matGet(m, x, y) );
        }
        printf("\n");
    }
}