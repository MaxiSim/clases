#include <iostream>

// typedef enum {
//     cent_5,
//     cent_10,
//     cent_25,
//     cent_50,
//     peso_1,
//     peso_2,
//     peso_5,
//     peso_10,
//     } moneda;

void ask_input (int *lista[8], int n) {
    int cent_5;
    int cent_10;
    int cent_25;
    int cent_50;
    int peso_1;
    int peso_2;
    int peso_5;
    int peso_10;
    std::cout << "Ingrese la cantidad de monedas de 5 centavos: ";
    std::cin >> cent_5;
    std::cout << "Ingrese la cantidad de monedas de 10 centavos: ";
    std::cin >> cent_10;
    std::cout << "Ingrese la cantidad de monedas de 25 centavos: ";
    std::cin >> cent_25;
    std::cout << "Ingrese la cantidad de monedas de 50 centavos: ";
    std::cin >> cent_50;
    std::cout << "Ingrese la cantidad de monedas de 1 peso: ";
    std::cin >> peso_1;
    std::cout << "Ingrese la cantidad de monedas de 2 pesos: ";
    std::cin >> peso_2;
    std::cout << "Ingrese la cantidad de monedas de 5 pesos: ";
    std::cin >> peso_5;
    std::cout << "Ingrese la cantidad de monedas de 10 pesos: ";
    std::cin >> peso_10;
    
    for (int i = 0; i < n; i++) {
        switch (i) {
            case 0:
                lista[i] = &cent_5;
                break;
            case 1:
                lista[i] = &cent_10;
                break;
            case 2:
                lista[i] = &cent_25;
                break;
            case 3:
                lista[i] = &cent_50;
                break;
            case 4:
                lista[i] = &peso_1;
                break;
            case 5:
                lista[i] = &peso_2;
                break;
            case 6:
                lista[i] = &peso_5;
                break;
            case 7:
                lista[i] = &peso_10;
                break;
        }
    }
}

double sumar (int *lista_ref[8]){
    double suma_pesos = 0;
    for (int i = 0; i < 8; i++){
        switch (i){
            case 0:
                suma_pesos += *lista_ref[i] * 0.05;
                break;
            case 1:
                suma_pesos += *lista_ref[i] * 0.10;
                break;
            case 2:
                suma_pesos += *lista_ref[i] * 0.25;
                break;
            case 3:
                suma_pesos += *lista_ref[i] * 0.50;
                break;
            case 4:
                suma_pesos += *lista_ref[i] * 1;
                break;
            case 5:
                suma_pesos += *lista_ref[i] * 2;
                break;
            case 6:
                suma_pesos += *lista_ref[i] * 5;
                break;
            case 7:
                suma_pesos += *lista_ref[i] * 10;
                break;
        }  
    }
    return suma_pesos;
};

void print_pesos_and_centavos (double pesos) {
    int pesos_enteros = (int) pesos;
    int centavos = (int) ((pesos - pesos_enteros) * 100);
    std::cout << "La suma de las monedas es: " << pesos_enteros << " pesos y " << centavos << " centavos." << std::endl;
}


int main (void){
    int *lista[8];
    int n = 8;
    ask_input(lista, n);
    double suma_pesos = sumar(lista);
    std::cout << "La suma de las monedas es de: $" << suma_pesos << " pesos." << std::endl;
    print_pesos_and_centavos(suma_pesos);
    return 0;
}