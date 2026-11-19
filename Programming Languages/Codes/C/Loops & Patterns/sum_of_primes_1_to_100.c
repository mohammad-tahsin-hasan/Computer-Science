#include <stdio.h>

int main() {
    int i, j, isPrime, sum = 0;

    for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume i is prime

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime) {
            sum += i;
        }
    }

    printf("Sum of prime numbers from 1 to 100 is: %d\n", sum);

    return 0;
}
