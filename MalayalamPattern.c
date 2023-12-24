#include <stdio.h>
#include <string.h>

int main()
{
    char str[]= "MALAYALAM";

    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}