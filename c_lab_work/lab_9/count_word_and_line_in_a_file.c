#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char filename[20];
    char ch;
    int words = 0, lines = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);
    // Open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }
    // Count words and lines
    int inWord = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            if (inWord) words++;
            inWord = 0;
            if (ch == '\n') lines++;
        } else {
            inWord = 1;
        }
    }
    if (inWord) words++; // Count the last word
    lines++; // For the last line
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);
    fclose(file);
    return 0;
}
