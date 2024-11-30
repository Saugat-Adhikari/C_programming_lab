#include <stdio.h>
int main() {
    int mat[3][3], sum = 0;
     printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        sum += mat[i][i] * mat[i][i]; // Primary diagonal
        if (i != 3 - i - 1) {
            sum += mat[i][3 - i - 1] * mat[i][3 - i - 1]; // Secondary diagonal
        }
    }
    printf("Sum of squares of diagonal elements: %d\n", sum);
    return 0;
}
