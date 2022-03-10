#include <iostream>

int main(void) {
    int t, money;
    int cash[4] = {25, 10, 5, 1};
    int cash_cnt[4] = {};
  
    std::cin >> t;

    for(int i=0; i<t; i++) {
        std::cin >> money;
      
        for(int j=0; j<4; j++) {
            cash_cnt[j] = money / cash[j];
            money %= cash[j];
        }

        for(int j=0; j<4; j++) {
            std::cout << cash_cnt[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}