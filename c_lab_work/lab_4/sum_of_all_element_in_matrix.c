#include <stdio.h>
int main() {
    int mat[3][3], sum = 0;
    printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("Sum of all elements in the matrix: %d\n", sum);
    return 0;
}
