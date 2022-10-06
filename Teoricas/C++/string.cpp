#include <iostream>
#include <cstring>
#include <string>

namespace mi_namespace {
    const int vasriable = 3;
}

int main (void){
    const std::string cadena = "Hola mundo";
    std::string dest;
    std::cout << "cadena: " << cadena << std::endl;

    dest = cadena;
    std::cout << "dest: " << dest << std::endl;

    std::cout << "cadena: " << cadena << std::endl;

    auto cadena2 = cadena;

    const char source[] = "Hello, World!";
    char destination[50];

    std::cout << "source: " << source << std::endl;

    std::strcpy(destination, source);
    std::cout << "destination: " << destination << std::endl;
    std::cout << "destination: " << destination << std::endl;

    std::cout << "source: " << source << std::endl;
    std::cout << mi_namespace::vasriable << std::endl;

    return 0; 
}