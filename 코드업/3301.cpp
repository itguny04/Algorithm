#include <stdio.h>

int main(void) {
    int cash[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    int money = 0;
    int cash_ctn = 0;
    int i = 0;

    scanf("%d", &money);

    while(money) {
        cash_ctn += money/cash[i];
        money = money % cash[i];
        i++;
    }

    printf("%d", cash_ctn);

    return 0;
}