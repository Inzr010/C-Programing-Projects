#include <stdio.h>
#include <string.h>

int main() {
    int  i , j, size;
    char alphabet[20];

    printf("Enter the size of Pattern: ");
    scanf("%d", &size);

    printf("Enter the alphabet used in this X pattern: ");
    scanf("%s", alphabet);

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j || i + j == size - 1) {
                printf("%c", alphabet [j % strlen(alphabet)]);
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}