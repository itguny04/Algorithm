#include <iostream>

bool check(std::string number) {
    int left, right;

    left = 0;
    right = number.length()-1;

    while(left<right) {
        if(number[left++] != number[right--]) {
            return false;
        }
    }

    return true;
}

int main(void) {

    while(1) {
        std::string number;
        std::cin >> number;

        if(number == "0") {
            break;
        } 

        if(check(number)) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }

    return 0;
}