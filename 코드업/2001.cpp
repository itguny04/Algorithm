#include <stdio.h>

int min(int arr[], int n) {
    int min = arr[0];

    for(int i=1;i<n;i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}


int main(void) {
    int pasta[3] = {};
    int juice[2] = {};
    int pasta_min, juice_min;

    for(int i=0;i<3;i++) {
        scanf("%d", &pasta[i]);
    }

    for(int i=0;i<2;i++) {
        scanf("%d", &juice[i]);
    }

    pasta_min = min(pasta, 3);
    juice_min = min(juice, 2);

    printf("%.1f", (pasta_min+juice_min)*1.1);

    return 0;    
}