#include <stdio.h>
int main() {
    int i, j, n, a[4][4];
    printf("Enter the number of rows and column :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("\n tkhe transpose of a matrix is:");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%5d", a[j][i]);

        printf("\n");
    }
    return 0;
}