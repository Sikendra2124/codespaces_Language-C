#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Left side increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%2d ", j);
        }

        // Spaces in the middle
        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
            printf("   "); // triple space for better alignment
        }

        // Right side decreasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%2d ", j);
        }

        printf("\n");
    }

    return 0;
}
