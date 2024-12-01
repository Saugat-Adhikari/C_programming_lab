#include <stdio.h>
// Function for Call by Value
void callByValue(int num) {
    num = num + 5; // Modify the local copy
    printf("Inside callByValue, num = %d\n", num);
}// Function for Call by Reference
void callByReference(int *ptr) {
    *ptr = *ptr + 5; // Modify the actual value
    printf("Inside callByReference, value = %d\n", *ptr);
}
int main() {
    int value1 = 10, value2 = 20;
    printf("Before callByValue, value1 = %d\n", value1);
    callByValue(value1); // Call by Value
    printf("After callByValue, value1 = %d\n", value1);
    printf("\nBefore callByReference, value2 = %d\n", value2);
    callByReference(&value2); // Call by Reference
    printf("After callByReference, value2 = %d\n", value2);
    return 0;
}
