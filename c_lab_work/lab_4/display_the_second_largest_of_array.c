#include <stdio.h>
int main() {
    int arr[5], largest, secondLargest;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    largest = secondLargest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest number is: %d\n", secondLargest);
    return 0;
}
