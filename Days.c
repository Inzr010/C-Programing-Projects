#include <stdio.h>

int main()
{
    int dayNumber;

    printf("Enter a Number(1-7): ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
    printf("Sunday\n");
    break;
    case 2:
    printf("Monday\n");
    break;
    case 3:
    printf("Tuesday\n");
    case 4:
    break;
    printf("Wednesday\n");
    break;
    case 5:
    printf("Thursday\n");
    break;
    case 6:
    printf("Friday\n");
    break;
    case 7:
    printf("Saturday\n");
    break;
    default:
    printf("Invalid input please enter a number between 1 - 7 !");
    break;
    }

    return 0;
}