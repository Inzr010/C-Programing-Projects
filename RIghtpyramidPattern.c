#include <stdio.h>

int main() {
    int i, j, n;

    // Input the value of n (height of the letter 'N')
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Outer loop for the height of the 'N'
    for (i = 1; i <= n; i++) {
        // Inner loop for each row
        for (j = 1; j <= n; j++) {
            // Print '*' for the first column, last column, and middle row
            if (j == 1 || j <= n - 1 || i == j)
                printf("*");
            else
                printf(" "); // Prijnt a space for other positions
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
