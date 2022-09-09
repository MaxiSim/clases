#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "status.h"



long gauss_sum(int n){
    long r = 0;
    for (size_t k = 0; k < n; k++){
        r += k;
    }
    return r;
}

status_t gauss_sum2 (long *r, int n){
    if (NULL == r){
        return ST_ERR_PTR_NULL;
    };
    if (n <= 0){
        return ST_INVALID_ARG;
    }
    *r = gauss_sum(n);

    return ST_OK;
}

int main ()
{
    status_t st;
    long r = 0;
    int num = gauss_sum(10);
    printf("%i\n", num);
    st = gauss_sum2(&r, 10);
    printf("%li\n", r);


    return 0;
}