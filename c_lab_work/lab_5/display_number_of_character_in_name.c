#include <stdio.h>
int main() {
    char name[100];
    int count = 0;
    printf("Enter a name: ");
    scanf("%s",&name); 
    while (name[count] != '\0') {
        count++;
    }
    printf("Total number of characters: %d\n", count);
    return 0;
}
