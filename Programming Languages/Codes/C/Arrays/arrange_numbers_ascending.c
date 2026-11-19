#include <stdio.h>
int main() {
    int i, j, n, temp, a[100];
    printf("How many numbers do you have?:");
    scanf("%d", &n);
    printf("\n Enter the numbers :");
    for (i = 1; i <= n; i++) {
        scanf("%d", a[i]);
    }
    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (a[i] > a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\n the numbers in ascending order are :");
    for (i = 1; i <= n; i++) {
        printf("\n%d", &a[i]);
    }
    return 0;
}