#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "status.h"


status_t parser (int argc, char **argv, char **max){
    if (NULL == max){
        return ST_ERR_PTR_NULL;
    }
    if (argc < 2){
        return ST_ERR_INSUF_ARGS;
    }
    int index = 1;
    for (size_t i = 1; i < argc; i++){
        if (strlen(argv[i]) > strlen(argv[index])){
            index = i;
        };
    }
    *max = argv[index];

    return ST_OK;
}

int main(int argc,char **argv){
    status_t st;
    char *max = NULL;
    st = parser(argc, argv, &max);
    if (st != ST_OK) {
        fprintf (stderr, "Error: %s\n", err_to_str (st));
        return EXIT_FAILURE;
    };
    if (st == ST_OK){
        printf("%s\n", max);
    };
    
    return EXIT_SUCCESS;
}