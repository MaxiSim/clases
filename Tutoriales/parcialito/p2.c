#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "status.h"

double mean (const double *v, size_t n){
    double suma = 0;
    for (size_t i = 0; i < n; i++){
        suma += i;
    }
    return suma / n;
}

double std( const double *v, size_t n){
    double s = 0; 
    double mu = mean(v,n);

    for (size_t i = 0; i < n; i++){
        s += fabs(v[i]-mu);
    }
    return s/n;
}

ssize_t search (double *v, size_t l, int n){
    ssize_t index = 0; 
    double s_min = 0;

    if (NULL == v){
        return -1;
    };
    if (n <= 0 || l == 0 || n>l){
        return -1;
    }

    s_min = std(v,n);
    index = 0;

    for (size_t i = 1; i < l-n; i++){
        double s = std(&v[i], n);
        if (s < s_min){
            index = i;
            s_min = s;
        };
    }
    return index;

}

int main (){
    double x[] = {1,2,3,4,5,6,7,8,9,10};
    ssize_t i = search(x,10,7);
    printf("%li\n", i);
    return EXIT_SUCCESS;
}