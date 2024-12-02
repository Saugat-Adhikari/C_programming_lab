#include <stdio.h>
void increment(int *n) {
    *n += 1;
}
int main() {
    int num = 5;
    printf("Before increment: %d\n", num);
    increment(&num); // Pass address of num
    printf("After increment: %d\n", num);
    return 0;
}
