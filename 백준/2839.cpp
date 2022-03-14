#include <iostream>

int main(void) {
    int user_input = 0;
    int a,b;

    std::cin >> user_input;

    a = user_input/5;
    while(1) {
        if(a<0) {
            std::cout << -1 << std::endl;
            return 0;
        } else if((user_input-(5*a))%3 == 0) {
            b = (user_input-(5*a))/3;
            break;
        }
        a--;
    }

    std::cout << a+b;

    return 0;
}