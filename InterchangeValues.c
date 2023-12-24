#include <stdio.h>

void swapArray(int arr1[], int arr2[], int size){
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main()
{
    int size;

    printf("Enter the size of both arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    printf("Enter the Elements of Array 1: ");
    for (int i = 0; i < size; i++) {
    scanf("%d", &arr1[i]);
    }
    printf("Enter the Elements of Array 2: ");
    for (int i = 0; i < size; i++) {
    scanf("%d", &arr2[i]);
    }

     swapArray(arr1, arr2, size);

     printf("\nArray after swapping:\n");
     printf("Array 1: ");
     for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
     }
     printf("\n");

     printf("Array 2: ");
     for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
     }
     printf("\n");


     return 0;
}