#include <stdio.h>

int main()
{
    float annualIncome, taxAmount;

    printf("Enter the Annual Income: ");
    scanf("%f", &annualIncome);

    if (annualIncome <= 250000){
      taxAmount = 0.0;
    } else if (annualIncome <= 500000) {
      taxAmount =  0.5 * (annualIncome - 250000);
    } else if (annualIncome <= 1000000) {
      taxAmount = 0.5 * (500000 - 250000) + 0.2 * (annualIncome - 500000);
    } else {
      taxAmount = 0.5 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (annualIncome - 500000);
    }

    printf("Income tax amount: %.2f\n", taxAmount);

    return 0;
}