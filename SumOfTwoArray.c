#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int arr1[size][size], arr2[size][size], sum[size][size];

    printf("Enter the values of Array 1: \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values of Array 2: \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    //sum of array
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //Displaying the sum
    printf("Sum of 2 Arrays: \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}