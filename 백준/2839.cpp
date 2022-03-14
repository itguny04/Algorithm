#include <iostream>

int main(void) {
    int user_input = 0, count = 0;
    int kg_type[2] = {5, 3};
    
    std::cin >> user_input;
    for(int i=0; i<2; i++) {
        count += user_input / kg_type[i];
        user_input = user_input % kg_type[i];
    }

    std::cout << count << std::endl;

    return 0;
}