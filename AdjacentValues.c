#include <stdio.h>

int main()
{
    int n;

    printf("Enter the Array Limit: ");
    scanf("%d", &n);

    int arr[n], result[n - 1];

    printf("Enter the values of Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n- 1; i++) {
        result[i] = arr[i] * arr[i + 1];
    }

    printf("Result Array:");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}