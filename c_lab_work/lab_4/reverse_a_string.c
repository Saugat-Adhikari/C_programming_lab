#include <stdio.h>
int main() {
    char str[100], temp;
    int length = 0;
    // Input the string
    printf("Enter a string: ");
    for (int i = 0; i < 100; i++) {
        str[i] = getchar();  // Input one character at a time
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace newline with null character
            break;
        }
        length++;
    }
    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    // Output the reversed string
    printf("Reversed string: ");
    for (int i = 0; i < length; i++) {
        putchar(str[i]);  // Print each character
    }
    printf("\n");
    return 0;
}
