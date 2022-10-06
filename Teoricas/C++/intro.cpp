#include <iostream> // lo incluyo para poder uasr cout

// existe el tipo "auto" que permite que el compilador infiera el tipo de la variable.
// esto es util cuando se quiere declarar una variable y asignarle un valor literal
// en la misma linea.

// int numero = 100;
// int& ref_numero = numero; // referencia a numero (tiene un uso similar a un puntero)

// void print_numero(const int& ref) // constante referencia a numero
// {
//     std::cout << ref; // imprimo el valor de la referencia (funcion similar a print)
    
// }

// int main (void){
//     print_numero(numero); // imprimo el valor de numero
//     print_numero(ref_numero); // imprimo el valor de ref_numero
//     return 0;
// }

int main (void){
    int an_int = 42;
    float a_float = 3.14f;

    std::cout << "an_int: " << an_int << ", a_float: " << a_float << '\n';

    std::cout << "Ingrese un numero entero: ";
    std::cin >> an_int;
    std::cout << "Ingrese un numero flotante: ";
    std::cin >> a_float;
    std::cout << "an_int: " << an_int << ", a_float: " << a_float << std::endl;

    std::cerr << "No hubo un error, pero probamos std::cerr" << std::endl;
}