#include <stdio.h>
int main() {
    int mat1[2][2], mat2[2][2], product[2][2] = {0};
    printf("Enter elements of matrix:1\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of matrix:2\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
