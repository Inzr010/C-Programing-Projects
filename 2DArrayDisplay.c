#include <stdio.h>

void getArray(int rows, int cols, int arr[rows][cols]) {
    printf("Enter the Values of Array :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void addArray(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i <  rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
void displayArray(int rows, int cols, int arr[rows][cols]){
    printf("Sum of Array 1 & 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows , cols;
    
    printf("Enter the size of Array: ");
    scanf("%d", &rows);
    cols = rows;

    int array1[rows][cols];
    int array2[rows][cols];
    int resultArray[rows][cols];

    getArray(rows , cols, array1);
    getArray(rows, cols, array2);
    addArray(rows, cols, array1, array2, resultArray);
    displayArray(rows, cols, resultArray);

    return 0;
}