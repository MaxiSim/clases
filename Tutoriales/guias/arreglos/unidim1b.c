#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int X = 1;
int Y = 7;
double matGet(double m[X][Y], int row, int col);
double matSet(double m[X][Y], int row, int col, double val);
void matShow(double m[X][Y], int rows, int cols);

int b (void) 
{
    double mat[X][Y];
    double j = 3.0;
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
    b();
    return 0;
}

double matSet (double m[X][Y], int row, int col, double val) {
    return m[row][col] = val;
}

double matGet (double m[X][Y], int row, int col) {
    return m[row][col];
}

void matShow (double m[X][Y], int rows, int cols) {
    int x = 0, y = 0;
    for (x = 0; x < X; x++) {
        for (y = 0; y < Y; y++) {
            printf("%f ", matGet(m, x, y) );
        }
        printf("\n");
    }
}

