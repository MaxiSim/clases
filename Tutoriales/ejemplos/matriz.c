#include <stdio.h>

// iterar sobre una matriz

// definir dos constantes para ancho y alto de la matriz
// recorrer con dos for anidados y asignar valores a cada celda de la matriz

const int X = 2;
const int Y = 3;
int matGet(int m[X][Y], int row, int col);
int matSet(int m[X][Y], int row, int col, int val);
void matShow(int m[X][Y], int rows, int cols);

int main(void) {
    int mat[X][Y];

    int j = 0;
    int x = 0, y = 0;
    for (x = 0; x < X; x++) {
        for (y = 0; y < Y; y++) {
            matSet(mat, x, y, j++);
        }
    }

    matShow( mat, X, Y);

    return 0; 
}

int matGet(int m[X][Y], int row, int col) {
    return m[row][col];
}

int matSet(int m[X][Y], int row, int col, int val) {
    return m[row][col] = val;
}

void matShow( int m[X][Y], int rows, int cols) {

    int x = 0, y = 0;

    for ( x = 0; x < X; x++) {
        for ( y = 0; y < Y; y++) {
            printf("%d ", matGet(m, x, y) );
        }
        printf("\n");
    }
}
