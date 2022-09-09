#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const size_t X = 2;
const size_t Y = 3;

void matShow (int (*m)[Y], size_t rows, size_t cols) {
    
    for (size_t x = 0; x < X; x++) {
        for (size_t y = 0; y < Y; y++) {
            printf("%d ", m[x][y] );
        }
        printf("\n");
    }
}


int main (void) {
    int mat[X][Y];
    int j = 0;

    // Setup
    for (size_t x = 0; x < X; x++) {
        for (size_t y = 0; y < Y; y++) {
            mat[x][y] = j++;
        }
    }

    matShow(mat, X, Y);

    return 0;
}