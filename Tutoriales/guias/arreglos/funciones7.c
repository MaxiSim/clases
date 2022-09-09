#include <stdio.h>
#include <stdlib.h>

int checkvtr (int list[], size_t n, int obj);

int main (){
    int list[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = checkvtr(list, 10, 11);
    printf("%i\n", x);
    return x;
}

int checkvtr (int list[],size_t n, int obj)
{
    int max = n-1;
    int min = 0;
    int med;
    int verif = 0;
    while (min <= max){
        med = (min + max)/2;
        if (list[med] == obj){
            return med;
        } else if (obj > list[med]){
            min = med + 1;
        } else {
            max = med -1;
        };
    } 
    return -1;
}