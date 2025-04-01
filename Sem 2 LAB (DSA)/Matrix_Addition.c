#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int i, j;
    int A[n][n], B[n][n], sum[n][n]; 

    printf("Enter first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]); 
        }
        printf("\n");
    }

    printf("Enter second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]); 
        }
        printf("\n");
    }

    // Perform matrix addition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("Sum of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}