#include <stdio.h>
int main() {
    FILE *file;
    char userInput[100];
    // Create or open the file
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    // Write to the file
    printf("Enter a string to write to the file: ");
    fgets(userInput, sizeof(userInput), stdin);
    fprintf(file, "%s", userInput);
    fclose(file); // Close after writing
    // Read from the file
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nContents of the file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file); // Close after reading
    return 0;
}
