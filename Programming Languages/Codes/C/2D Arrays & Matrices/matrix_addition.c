#include <stdio.h>
int main() {
    int i, j, n, a[4][4], b[4][4], c[4][4];
    printf("Enter the number of rows and column :");
    scanf("%d", &n);
    printf("\nEnter the elements of 1st matrix");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Enter the elements of 2nd matrix ");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &b[i][j]);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\n the addition of matrix is :");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%d", c[i][j]);

        printf("\n");
    }

    return 0;
}