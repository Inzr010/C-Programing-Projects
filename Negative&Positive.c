#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d the Elements of Array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int positive[size],negative[size];
    int posCount=0,negCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            positive[posCount++] = arr[i];
        }else {
            negative[negCount++] = arr[i];
        }
    }
    printf("\nPositive count: ");
    for (int i = 0; i < posCount; i++){
        printf("%d ", positive[i]);
    }
    printf("\nNegative count: ");
    for (int i = 0; i < negCount; i++) {
        printf("%d ", negative[i]);
    }



    return 0;
}