#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int in_money_cnt = 0;
    int in_money = 0;
    int money_cnt = 0;
    int *cash_kind;

    scanf("%d %d", &in_money_cnt, &in_money);

    cash_kind = (int *)malloc(sizeof(int)*in_money_cnt);

    for(int i=0;i<in_money_cnt;i++) {
        scanf("%d", &cash_kind[i]);
    }

    for(int i=in_money_cnt-1;i>=0;i--) {
        money_cnt += in_money / cash_kind[i];
        in_money %= cash_kind[i];
    }

    printf("%d", money_cnt);
  
    return 0;
}