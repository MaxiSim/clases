#include <iostream>
#include <string>

int main (void){
    srand(time(NULL));
    int a;
    int n;
    int max = 100;
    int min = 0;
    int validate = 0;
    std::cout << "Ingrese un numero del 1 al 100: ";
    std::cin >> a;

    while (validate != 1){
        n = (rand() % (max - min)) + min;
        std:: cout << "Numero generado: " << n << std::endl;
        std:: cout << "1 si es correcto; 0 si es menor; 2 si es mayor: ";
        std:: cin >> validate;
        if (validate == 0){
            max = n;
        }else if (validate == 2){
            min = n;
        }
    }
    std::cout << "Has acertado! El numero era "<< a << std::endl;
    return 0;
}