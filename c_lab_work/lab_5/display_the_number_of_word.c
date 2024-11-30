#include <stdio.h>
int main() {
    char sentence[200];
    int count = 1;
    printf("Enter a sentence: ");
    gets(sentence);
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    return 0;
}
