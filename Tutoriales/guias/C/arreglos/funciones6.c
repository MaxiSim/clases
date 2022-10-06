#include <stdio.h>
#include <stdlib.h>

int checkvtr (int list[], int obj);

int main (){
    int list[5] = {1,2,3,4,5};
    int x = checkvtr(list, 4);
    printf("%i\n", x);
    return x;
}

int checkvtr (int list[], int obj)
{
    int pos;
    int verif = 0;
    for (size_t i = 0; i < 5; i++){
        if (list[i] == obj){
            verif = 1;
            pos = i;
            break;
        } else {
            verif = 0;
        };
    }
    if (verif == 1){
        return pos;
    } else {
        return -1;
    };
}