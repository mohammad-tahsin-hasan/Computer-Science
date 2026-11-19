#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int  X;
    int N;
    scanf("%d", &N);
    int array[N];

    for (int index = 1; index <= N; index++) {
        scanf("%d", &array[index]);
    }
    scanf("%d", &X);
    if (array[X] == 0) {
        array[X] = 1;
    } else if (array[X] == 1) {
        array[X] = 0;
    }

    for (int index = 1; index <= N; index++) {
        printf("%d ", array[index]);
    }

    return 0;
}