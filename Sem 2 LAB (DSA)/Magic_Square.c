#include<stdio.h>

void generateMagicSquare(int n) {
    int magicSquare[n][n];

    // Initialize all positions as 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Start position for 1
    int i = 0, j = n / 2;

    // Place all numbers from 1 to n*n
    for (int num = 1; num <= n * n; ) {
        if (i < 0 && j == n) { // Condition 4
            i = 0;
            j = n - 2;
        } else {
            // Wrap around rows
            if (i < 0) i = n - 1;

            // Wrap around columns
            if (j == n) j = 0;
        }

        if (magicSquare[i][j] != 0) { // Condition 2
            i += 1;
            j -= 2;
            continue;
        } else {
            // Place the number
            magicSquare[i][j] = num++;
        }

        // Move to the next position
        i--;
        j++;
    }

    // Print the magic square
    printf("The Magic Square for n = %d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Magic square is not possible for even numbers.\n");
        return 1;
    }

    generateMagicSquare(n);

    return 0;
}