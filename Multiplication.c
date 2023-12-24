#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication of table for %d: \n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, number, i * number);
    }

    return 0;
}