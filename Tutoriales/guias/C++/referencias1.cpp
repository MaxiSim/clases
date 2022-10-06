#include <iostream>

int main (void){
    int ref = 10;
    int &r = ref;
    int const &b = ref;
    // int& b = ref;
    // const int *p = &ref;
    int const *p = &ref;
    // int* const x = &ref;
    const int* const x = &ref;

    std::cout << "ref = " << ref << std::endl;
    std::cout << "r = " << r << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;
    std::cout << "x = " << x << std::endl;
    


    return 0;
}