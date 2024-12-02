#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int)); // Allocate memory dynamically
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr); // Free allocated memory
    return 0;
}
