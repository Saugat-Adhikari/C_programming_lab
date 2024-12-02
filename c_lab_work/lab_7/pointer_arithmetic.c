#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Initial pointer value: %d\n", *ptr);
    ptr++; // Move to the next element
    printf("After ptr++: %d\n", *ptr);
    ptr += 2; // Move two elements forward
    printf("After ptr += 2: %d\n", *ptr);
    ptr--; // Move one element backward
    printf("After ptr--: %d\n", *ptr);
    return 0;
}
