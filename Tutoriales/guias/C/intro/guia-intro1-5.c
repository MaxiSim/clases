#include <math.h>
#include <stdio.h>

const float F = 73.4;
const float C = 25;
const int hr = 1, min = 10, sec = 30;
const float x = 3, y = 3, z = 3;

double monto (int C, float x, int n );
float FtoC (float F);
float CtoF (float C);
int time (int hr, int min, int sec);
float norma (float x, float y, float z);

int main(void) {
    
    return 0;
}

float FtoC ( float F) {
    return (F - 32)*5/9;
}

float CtoF (float C) {
    return (C*9/5)+32; 
}

double monto (int C, float x, int n) {
    return C * pow((1+(x/100)), n);
}

int time (int hr, int min, int sec){
    return sec + (min * 60) + (hr * 60 * 60);
}

float norma (float x, float y, float z) {
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}


