#include <stdio.h>
#include <stdlib.h>

int checkvtr (int list[], int obj);

int main (){
    int list[5] = {1,2,3,4,5};
    int x = checkvtr(list, 7);
    printf("%i\n", x);
    return x;
}

int checkvtr (int list[], int obj)
{
    int verif = 0;
    for (size_t i = 0; i < 5; i++){
        if (list[i] == obj){
            verif = 1;
            break;
        } else {
            verif = 0;
        };
    }
    if (verif == 1){
        return 1;
    } else {
        return 0;
    };
}