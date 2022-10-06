#include <iostream>


int random_num(void){
    return rand() % 35;
}


int compute_randoms(int count, int num_array[36]){
    int aux = 0;
    int counter = 0;
    for (size_t i = 0; i < count; i++){
        aux = random_num();
        num_array[aux] += 1;
        counter += 1;
        }
    return counter;
}



void print_randoms(int count)
{
    for (size_t i = 0; i < count; i++)
    {
        std::cout << rand() % 35 << "\t";
    }
    std::cout << std::endl;
}

int main (void){
    int n = 36;
    int count = 36;
    int num_array[36] = {0};

    std::cout << "Numero random: ";
    // print_randoms(count);
    int counter = compute_randoms(count, num_array);
    std::cout << "Numero de randoms: " << counter << std::endl;
    std::cout << "Numero random: ";
    for (size_t i = 0; i < n; i++){
        std::cout << i << ": " << num_array[i] << "  ";
    }
    std::cout << std::endl;

    return 0;
}