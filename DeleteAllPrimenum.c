//Write a program to delete all prime number in an Array
#include <stdio.h>

int main()
{
    int p,i,j,k,n,count=0,a[10];
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter Elements of Array: ");
    for (i = 0; i < 0; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 0; i <n; i++) {
        count=0;
        for (j = 1; j < a[i]; j++) {
            if (a[i]%j==0) {
                count++;
            }
        }
        if(count==2) {
            for (k = i; k < n; k++) {
                a[k]=a[k+1];
            }
        n=n-1;
        i=i-1;
        }
    }
    for (i = 0; i <n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}