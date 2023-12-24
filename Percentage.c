#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter your total marks percentage: ");
    scanf("%f", &percentage);

    if (percentage >=  90){
        printf("Grade : A\n");
    } else if (percentage >= 80){
        printf("Grade : B\n");
    } else if (percentage >= 70) {
        printf("Grade : C\n");
    } else if (percentage >= 60) {
        printf("Grade : D\n");
    }else if (percentage >= 50) {
        printf("Grade : D\n");
    } else {
        printf("Grade F (failed)\n");
    }

    return 0;
}