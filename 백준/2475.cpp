#include <iostream>

int main(void) {
    int array[5];
    int number = 0;

    for(int i=0;i<5;i++) {
        std::cin >> array[i];
    }

    for(int i=0;i<5;i++) {
        number += array[i] * array[i];
    } 

    number %= 10;

    std::cout << number;

    return 0;
}