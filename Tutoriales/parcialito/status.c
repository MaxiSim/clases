#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "status.h"


const char *err_to_str (status_t st) 
{
    if ((st >= 0) && (st <= ST_ERR_INSUF_ARGS)) {
        return err[st];
    }   

    return "unknown error";
}