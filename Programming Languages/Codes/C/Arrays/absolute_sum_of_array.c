#include <stdio.h>
#include <stdlib.h>  // For abs() function

int main() {
    int N;
    scanf("%d", &N);  // Read the number of elements

    long long int absolute_sum = 0;  // To store the sum of absolute values
    int number;

    // Read each number, compute its absolute value, and add to the sum
    for (int i = 0; i < N; i++) {
        scanf("%d", &number);
        absolute_sum += abs(number);  // Use abs() from stdlib.h to get the absolute value
    }

    // Print the result
    printf("%lld\n", absolute_sum);

    return 0;
}
