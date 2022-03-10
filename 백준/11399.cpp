#include <stdio.h>

void upper_sort(int *arr, int n) {
    int min, tmp;

    min = 0;

    for(int i=0;i<n-1;i++) {
        min=i;
        for(int j=i;j<n;j++) {
            if(arr[min]>arr[j]) {
                tmp = arr[min];
                arr[min] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(void) {
    int person_cnt = 0;
    int time[1001];
    int sum = 0;

    scanf("%d", &person_cnt);
  
    for(int i=0;i<person_cnt;i++) {
        scanf("%d", &time[i]);
    }

    upper_sort(time, person_cnt);

    for(int i=0;i<person_cnt;i++) {
        for(int j=0;j<i+1;j++){
            sum += time[j];
        }
    }

    printf("%d", sum);

    return 0;
}


person_cnt = input