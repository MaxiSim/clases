#include <iostream>
#include <string>

void print_string(const std::string& word) {
    std::cout << word << std::endl;
}

int main (void){

    auto number = 3.14f;
    auto& number_ref = number;
    const auto& kNumberRef = number;

    std::cout << "number: " << number << std::endl;
    std::cout << "number_ref: " << number_ref << std::endl;
    std::cout << "kNumberRef: " << kNumberRef << std::endl;

#if 0 // Hace que el precompilador ignore el codigo y me deja comentar adentro
    std::cout << "modifico la referencia (number_ref = 4.2)" << std::endl;

    number_ref = 4.2f;
    std::cout << "number: " << number << std::endl;
    std::cout << "number_ref: " << number_ref << std::endl;
    std::cout << "kNumberRef: " << kNumberRef << std::endl;
#endif
    return 0;
}