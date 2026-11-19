#include <stdio.h>
int count_before_one(int x[], int y) {
    int c = 0;
    for (int i = 0; i < y; i++) {
        if (x[i] == 1) {
            break;
        }
        c++;
    }
    return c;
}
int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int c = count_before_one(A, N);
    printf("%d", c);
    return 0;
}