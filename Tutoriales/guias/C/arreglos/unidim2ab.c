#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int vector[10] = {0};
    for (int i = 0; i < 10; i++){
        vector[i] += 1;
        printf("%i, ", vector[i]);
    }
    
    return 0;
}