#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];  // Copy the array for selection sort
    }
    printf("\nPerforming Bubble Sort...\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                // Swap
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array (Bubble Sort): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("\nPerforming Selection Sort...\n");
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr2[j] < arr2[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr2[i];
        arr2[i] = arr2[minIndex];
        arr2[minIndex] = temp;
    }
    printf("Sorted Array (Selection Sort): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
