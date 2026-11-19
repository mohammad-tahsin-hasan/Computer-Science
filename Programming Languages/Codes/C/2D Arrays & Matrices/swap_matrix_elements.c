#include <stdio.h>

int main() {
    int N, M;
    int l = 1;
    int a[1001][1001];
    int c[101][2];
    int r[2][101];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
            c[i][2] = a[i][M - 1];
            a[i][M - 1] = a[i][0];
            a[i][0] = c[i][2];
            r[2][j] = a[N - 1][j];
            a[N - 1][j] = a[0][j];
            a[0][i] = r[2][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
