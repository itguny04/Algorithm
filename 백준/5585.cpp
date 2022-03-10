#include <iostream>

int main(void) {
    int money;
    int cash[6] = {500, 100, 50, 10, 5, 1};
    int cash_cnt = 0;
  
    std::cin >> money;
      
    for(int i=0; i<6; i++) {
        cash_cnt += money / cash[i];
        money %= cash[i];
    }

    std::cout << cash_cnt;

    return 0;
}