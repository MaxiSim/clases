#include <iostream>
#include <string>

int main (void){
    srand(time(NULL));
    int n = rand() % 100;
    int a;
    std::cout << "Adivina el numero: ";
    std::cin >> a;
    while (a != n){
        if (a > n){
            std::cout << "El numero es menor" << std::endl;
        }else{
            std::cout << "El numero es mayor" << std::endl;
        }
        std::cout << "Adivina el numero: ";
        std::cin >> a;
    }
    std::cout << "Has acertado! El numero era "<< n << std::endl;
    return 0;
}