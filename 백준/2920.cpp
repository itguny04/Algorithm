#include <iostream>

bool check_ascending(int *arr) {
    for(int i=0;i<7;i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

bool check_descending(int *arr) {
    for(int i=0;i<7;i++) {
        if(arr[i] < arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int arr[8];

    for(int i=0;i<8;i++) {
        std::cin >> arr[i];
    }

    if(check_ascending(arr)) {
        std::cout << "ascending" << std::endl;
    } else if(check_descending(arr)) {
        std::cout << "descending" << std::endl;
    } else {
        std::cout << "mixed" << std::endl;
    }

    return 0;
}