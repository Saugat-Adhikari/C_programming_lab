#include <stdio.h>
int main() {
    int arr[5], largest;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest number is: %d\n", largest);
    return 0;
}
