#include <stdio.h>
int main() {
    int numbers[20], evenCount = 0, oddCount = 0;
    printf("Enter 20 numbers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
    return 0;
}
