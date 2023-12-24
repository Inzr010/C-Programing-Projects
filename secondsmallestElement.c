//Find the Second smallest Elements in an Array
#include <stdio.h>

int main()
{
    int n, i;

    //input from user 
    printf("Enter the number of Elements from the User: ");
    scanf("%d", &n);

    int arr[n];

    //input array Elements
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
    }

    //find the second smallest element
    int smallest = arr[0];
    int secondsmallest = arr[0];

    for (i = 1; i < n; ++i) {
        if(arr[i]  < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        }else if (arr[i] < secondsmallest && arr[i] != smallest) {
            secondsmallest = arr[i];
        }
    }
    
    //Display second smallest elements
    printf("Second smallest Elements: %d\n", secondsmallest);

    return 0;
}