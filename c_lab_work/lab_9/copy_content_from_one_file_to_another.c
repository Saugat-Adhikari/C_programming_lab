#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    // Open source file
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Source file not found.\n");
        return 1;
    }
    // Open or create destination file
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error creating destination file.\n");
        fclose(source);
        return 1;
    }
    // Copy content
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);
    return 0;
}
