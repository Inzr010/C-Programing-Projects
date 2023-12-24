#include <stdio.h>

int main()
{
    int i, j, spaces, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++) {
            if (j <= i) {
                printf("%d ", j);
            }else{
                printf("%d ", i * 2 - j);
            }
        }
        printf("\n");
    }


    return 0;
}