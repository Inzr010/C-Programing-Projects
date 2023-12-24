#include <stdio.h>

int main()
{
    int i, n, j, arr[100];

    printf("Enter the size of Elements: ");
    scanf("%d", &n);

    printf("Enter the number of Elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int count=0;

        for (j = 2; j <= arr[i]/2; j++) {
            if(arr[i]%j == 0) {
                count++;
                break;
            }
        }
        if (count== 0 && arr[i] > 1) {
            printf("Prime number is:%d\n", arr[i]);
        }
    }

    return 0;
}