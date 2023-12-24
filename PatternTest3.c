#include <stdio.h>

void main()
{
    int i, j, k, rows;

    printf("Enter the rows: ");
    scanf("%d", rows);

    for (i = 1 ; i <= rows; i++) {
        for (j = 1; j <= i * 3; j++) {
            printf("*  ");
        }
        printf("\n\n");
        for (k = 1; k <= 2; k++) {
            printf("*\n\n");
        }
 
    }
}