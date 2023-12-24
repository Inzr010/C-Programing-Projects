#include <stdio.h>

void getArray(int arr[], int size) {
    printf("Enter the %d Elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size) {
    printf("Array Elements are: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid Array size, Please enter the positive array size.\n");
        return 1;
    }
    
    int myArraySize[size];

    getArray(myArraySize, size);

    displayArray(myArraySize, size);



    return 0;
}