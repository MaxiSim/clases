#include <stdio.h>
#include <math.h>

// ejercicio 6
float diametro (float rad){
    return rad * 2;
}

float circ (float rad) {
    return 2 * M_PI * rad;
}

float areab (float rad) {
    return M_PI * pow(rad,2);
}

float vol (float rad, float h) {
    return M_PI * h * pow(rad,2);
}

float areac (float rad, float h) {
    return (2 * M_PI * rad * h)+(2 * M_PI * pow(rad, 2));
}

// hasta aca.


