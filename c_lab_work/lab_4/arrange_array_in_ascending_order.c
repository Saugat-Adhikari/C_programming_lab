#include <stdio.h>
int main() {
    int arr[10]={1,3,4,5,7,8,9,2,6,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:    ");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
