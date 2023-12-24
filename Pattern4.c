#include <stdio.h>

void main()
{
    int rows, i, j, k, l;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2 * i; j++) {
            printf("*  ");
        }
        printf("\n\n");
        if (i == rows) {
            break;
        }
        for (k = 1; k <= i * 3; k++) {
            printf("*\n\n");
            }
        }
    }
