#include <iostream>

int ecuacion (int a, int b, int c){
    return (a + b + c) * 2 + c;
}

int main (void){
    int a = 1;
    int b = 2;
    int c = 3; 

    int res = ecuacion(a, b, c);
    std::cout << "El resultado es: " << res << std::endl;
    
    return 0;
}