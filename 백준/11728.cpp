#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr1;
    int* arr2;
    int arr1_size, arr2_size;
    int* result_arr;
    int min;

    scanf("%d %d", &arr1_size, &arr2_size);

    arr1 = (int *)malloc(sizeof(int)*arr1_size);
    arr2 = (int *)malloc(sizeof(int)*arr2_size);

    result_arr = (int *)malloc(sizeof(int)*(arr1_size+arr2_size));


    for(int i=0; i<arr1_size; i++) {
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<arr2_size; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i=0; i<arr1_size; i++) {
        result_arr[i] = arr1[i];
    }

    for(int i=0; i<arr2_size; i++) {
        result_arr[i+arr1_size] = arr2[i];
    }

    for(int i=0; i<(arr1_size+arr2_size); i++) {
        min = i;
        for(int j=i; j<(arr1_size+arr2_size); j++) {
            if(result_arr[min] > result_arr[j]) {
                result_arr[min] = result_arr[min] ^ result_arr[j];
                result_arr[j] = result_arr[j] ^ result_arr[min];
                result_arr[min] = result_arr[min] ^ result_arr[j];
            }
        }
    }
    
    for(int i=0; i<(arr1_size+arr2_size); i++) {
        printf("%d ", result_arr[i]);
    }

    return 0;
}