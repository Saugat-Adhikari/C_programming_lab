#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 30;
    int *arr[] = {&a, &b, &c}; // Array of pointers
    for (int i = 0; i < 3; i++) {
        printf("Value of element %d: %d\n", i, *arr[i]);
    }
    return 0;
}
