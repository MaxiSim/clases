#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {
    ST_OK,
    ST_ERR_PTR_NULL,
    ST_INVALID_ARG,
    ST_ERR_INSUF_ARGS
} status_t;


static const char *err[] = {
    [ST_OK] = "ST_OK",
    [ST_ERR_PTR_NULL] = "ST_ERR_PTR_NULL",
    [ST_INVALID_ARG] = "ST_INVALID_ARG",
    [ST_ERR_INSUF_ARGS] = "ST_ERR_INSUF_ARGS"
};

const char *err_to_str (status_t st);