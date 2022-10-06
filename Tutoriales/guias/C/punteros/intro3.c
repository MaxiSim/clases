#include <stdio.h>
#include <stdlib.h>


// parte a
// int main (){
//     float var, set[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//     float *p;
    
//     printf("p: %p\n", p);
//     printf("*p: %f\n", *p);
//     printf("&set: %p\n", &set);
//     printf("var: %f\n", var);
//     printf("&var: %p\n", &var);

//     p = set;
//     var = *p;
//     *p = 10;
//     puts("\n");
//     printf("p: %p\n", p);
//     printf("*p: %f\n", *p);
//     printf("&set: %p\n", &set);
//     printf("var: %f\n", var);
//     printf("&var: %p\n", &var);
// return 0;    
// }

int main(){

int *ip, **ipp, (*ip16)[16], i, j;
int matriz[5][16];

ip16 = matriz;
ip = (int *)matriz;
ipp = (int **)matriz;

printf("ip16: %p\n", ip16);
printf("ip: %p\n", ip);
printf("ipp: %p\n", ipp);


}
