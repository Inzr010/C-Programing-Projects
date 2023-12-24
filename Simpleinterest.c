#include <stdio.h>

int main()
{
    float principles , rate, time, SimpleInterest;

    printf("Enter the Principle Amount: ");
    scanf("%f", &principles);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    SimpleInterest = (principles * rate * time)/100;

    printf("Simple Interest : %.2f",SimpleInterest);

    return 0;
}