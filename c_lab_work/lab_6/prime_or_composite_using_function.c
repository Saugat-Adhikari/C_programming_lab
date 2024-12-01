#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; // Composite
    }
    return 1; // Prime
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number))
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is a Composite number.\n", number);
    return 0;
}
