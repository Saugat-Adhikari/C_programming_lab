#include <stdio.h>
#include <string.h>
int main() {
    FILE *file, *tempFile;
    char filename[20], word[20], replacement[20];
    char buffer[500];
    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the word to find: ");
    scanf("%s", word);
    printf("Enter the replacement word: ");
    scanf("%s", replacement);
    // Open the original file and a temporary file
    file = fopen(filename, "r");
    tempFile = fopen("modified_file.txt", "w");
    if (file == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    // Read each line, replace word, and write to the temporary file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char *pos;
        while ((pos = strstr(buffer, word)) != NULL) {
            // Write text before the word
            fwrite(buffer, sizeof(char), pos - buffer, tempFile);
            // Write replacement word
            fprintf(tempFile, "%s", replacement);
            // Adjust buffer pointer
            strcpy(buffer, pos + strlen(word));
        }
        fprintf(tempFile, "%s", buffer);
    }
    printf("Word replaced successfully. Check 'modified_file.txt'.\n");
    fclose(file);
    fclose(tempFile);
    return 0;
}
