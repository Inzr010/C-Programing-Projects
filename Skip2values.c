#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++) {
        if (i  % 5 == 0) {
            printf("Multiple of 5: %d\n", i);

            i +=2;
        }else {
            printf("Normal number :%d\n", i);
        }

    }

    return 0;
}