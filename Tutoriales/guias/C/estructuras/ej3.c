#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "status.h"

struct msg {
    char *usrname[30];
    unsigned long msg_id;
    time_t *date;
    char *message[143];    
};

typedef struct msg MSG;

void show_msg (MSG msg){
    printf ("Date: %s\n", ctime(msg.date));
    printf("    %s\n", *msg.message);
    printf("\n");
    printf("        Saludos, %s\n", *msg.usrname);
}


int main (void){
    time_t *t;
    MSG msg;
    msg.date = t;
    *msg.usrname = "Juan";
    msg.msg_id = 1;
    *msg.message = "Hola, como estas?";
    show_msg(msg);
    return 0;
}