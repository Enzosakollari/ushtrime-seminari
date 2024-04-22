#include <stdio.h>

int summatrix(int n, int mat[n][n]) {
    int shuma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            shuma += mat[i][j];
        }
    }
    return shuma;
}

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix with size %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = summatrix(n, matrix);
    printf("The sum of all elements in the matrix: %d\n", sum);

    return 0;
}
