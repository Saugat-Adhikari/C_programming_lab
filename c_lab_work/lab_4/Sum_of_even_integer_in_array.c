#include <stdio.h>

int main() {
    int arr[10]={1,1,1,2,2,2,3,3,3,4}, sum = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    printf("Sum of all even integers is %d\n", sum);
    return 0;
}
