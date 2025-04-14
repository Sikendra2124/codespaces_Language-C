#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n], arr3[n][n];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);

    // Initialize arr3 with 0
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            arr3[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print matrices
    printf("First matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
    }

    printf("Second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
    }

    printf("Multiplication of the matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", arr3[i][j]);
        printf("\n");
    }

    return 0;
}
