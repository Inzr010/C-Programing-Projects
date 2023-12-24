#include <stdio.h>

int isPrime(int num)  {
    if(num <= 1){
        return 0;
    }
    for (int i = 2; i * i <= num ; i++) {
        if(num % i == 0) {
            return 0;//not prime num
        }
    }
    return 1;//prime num
}
int main() {
    int lower, upper;

    printf("Enter lower limit of the range: ");
    scanf("%d", &lower);

    printf("Enter upper limit of the range: ");
    scanf("%d", &upper);

    int sum = 0;

    for (int i = lower; i < upper; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }
    printf("Sum of prime number between %d and %d: %d \n", lower, upper, sum);

    return 0;
}

