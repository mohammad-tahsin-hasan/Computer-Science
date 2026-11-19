#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int f[26] = {0};
    int t[26] = {0};
    char S[1001];
    char T[1001];
    int y = 1;
    fgets(S, sizeof(S), stdin);
    fgets(T, sizeof(T), stdin);
    int k = strlen(S);
    if (strlen(S) != strlen(T)) {
        printf("NO");
        return 0;
    }

    for (int i = 0; S[i] != '\0'; i++) {
        char c = S[i];
        int in = c - 'a';

        f[in]++;
    }
    for (int i = 0; T[i] != '\0'; i++) {
        char c = T[i];
        int in = c - 'a';

        t[in]++;
    }
    for (int i = 0; i < 26; i++) {
        if (f[i] != t[i]) {
            y = 0;
        }
    }
    if (y == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}