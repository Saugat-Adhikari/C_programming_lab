#include <stdio.h>
int main() {
    int n, searchElement, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d.\n", searchElement, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }
    return 0;
}
