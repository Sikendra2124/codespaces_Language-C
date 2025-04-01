#include<stdio.h>

void generateMagicSquare(int n) {
    int magicSquare[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    int i = 0, j = n / 2;

    for (int num = 1; num <= n * n; ) {
        if (i < 0 && j == n) { 
            i = 0;
            j = n - 2;
        } else {

            if (i < 0) i = n - 1;

            if (j == n) j = 0;
        }

        if (magicSquare[i][j] != 0) { 
            i += 1;
            j -= 2;
            continue;
        } else {
            
            magicSquare[i][j] = num++;
        }

        i--;
        j++;
    }

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