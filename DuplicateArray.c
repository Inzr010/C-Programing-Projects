#include <stdio.h>

int main()
{
    int p,i,j,k,n,freq=0,a[10],count=0;
    printf("Enter the size of Array: ");
    scanf("%d",&n);

    printf("Enter Elements of Array: ");
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Duplicate Elements of the Array: ");
    for (i = 0; i < n; i++) {
        if(a[i]!= -1) {
            freq =0;
            for (j = i + 1; j < n; j++) {
                freq++;
                a[j]=-1;
            }
        }
        if (freq!= 0) {
            printf("%d ", a[i]);
        }
    }


    return 0;
}