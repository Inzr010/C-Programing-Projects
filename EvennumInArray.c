#include <stdio.h>

int main()
{
    int n, countEven=0;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements of Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            countEven++;
        }
    }
    printf("The number of even number in the given array: %d\n", countEven);

    return 0;
}