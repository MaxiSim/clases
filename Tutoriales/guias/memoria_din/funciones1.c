#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *nombre_strcopy (char *origin){
    char* copy = (char *)malloc((strlen(origin)+1) * sizeof(char));
    if ( NULL == copy){
        return NULL;
    };

    return strcpy(copy, origin);
}

bool interfaz_copy (char *origin, char **cop){
    *cop = (char *)malloc(strlen(origin)+1);
    if (NULL == *cop){
        return false;
    }
    for (size_t i = 0; i <= strlen(origin); i++){
        (*cop)[i] = origin[i];
    }

    return true;
}

int *nombre_numcopy (int *num, int n){
    int* copy = (int *)malloc(n * sizeof(int));
    if ( NULL == copy){
        return NULL;
    };

    for (size_t i = 0; i < n ; i++){
        copy[i] = num[i];
    };
    return copy;
}

bool interfaz_copynum (int *num, int n, int **numcop){
    *numcop = (int *)malloc(n * sizeof(int));
    if (NULL == *numcop){
        return false;
    }
    for (size_t i = 0; i < n ; i++){
        (*numcop)[i] = num[i];
    };

    return true;
}

char *strcopy_del (char *origin, char target){
    char* copy = (char *)malloc((strlen(origin)+1) * sizeof(char));
    if ( NULL == copy){
        return NULL;
    };

    return copy;
}

int main ()
{   
    
    return 0;
}

// int num[] = {1,2,3,4};
    // int n = sizeof(num)/sizeof(int);
    // int *numcop;
    // char *cop;
    // char *origin = "devuelvan malvinas";
    // char *copy = nombre_strcopy(origin);
    // bool copy2 = interfaz_copy(origin, &cop);
    // int *copynum = nombre_numcopy(num, n);
    // bool copynum2 = interfaz_copynum(num, n, &numcop);
    // // printf("%s\n", copy);
    // printf("%i\n", copynum2);
    // for (size_t i = 0; i < 4 ; i++){
    //     printf("%i\n", numcop[i]);
    // }
    
    // free(copy);
    // free(cop);
    // free(copynum);
    // free(numcop);
