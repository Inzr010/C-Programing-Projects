//1.Accept two inputs from users and output it's Sum
#include <stdio.h>

int main()
{
    int number1;
    float number2, sum;

    printf("Enter an integer: ");
    scanf("%d", &number1);

    printf("Enter a float: ");
    scanf("%f", &number2);

    sum = number1 + number2;
    
    printf("Result is: %.2f\n", sum);

    return 0;
}