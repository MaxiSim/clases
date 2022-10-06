#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    char c;
    int count = 0;
    printf("Introduce una cadena: ");
    for (size_t i = 0; i < 100; i++){
        c = getchar();
        if (c == '\n'){
            printf ("%d\n",count);
            break;
        }
        count += 1;
        
    }

    return 0;
}