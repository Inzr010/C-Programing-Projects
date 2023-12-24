#include <stdio.h>

void sortedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findUniqueAndCount(int arr[], int n){
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            printf("Unique number %d, Count: ", arr[i]);
            int Count=1;
            //find occurrences of Unique number
            for (int j = i + 1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    Count++;
                }else {
                    break;
                }
            }
            printf("%d\n", Count);
            uniqueCount++;
        }
    }
    printf("Total unique Numbers: %d\n", uniqueCount);
}

int main(){

    int arr[] = {4, 2, 7, 2, 5, 4, 7, 8, 1, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortedArray(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findUniqueAndCount(arr, n);

    return 0;
}