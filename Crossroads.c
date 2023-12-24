#include <stdio.h>

void printCrossroads(int count) {
    if (count < 8) {
        printf("Crossroads\n");
        printCrossroads(count + 1);
    }
}

int main() {

    printCrossroads(0);

    return 0;
}