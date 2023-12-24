#include <stdio.h>

int main()
{
    int rows, i, j;

    //Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    //Loop to print pattern
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        //Print increasing number
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        //Print Decreasing number
        for (j = i - 1; j >= 1; --j) {
            printf("%d", j);
        }

        printf("\n");

    }

    return 0;
}