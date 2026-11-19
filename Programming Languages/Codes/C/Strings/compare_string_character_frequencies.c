#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], T[1001];
    int fS[26] = {0}, fT[26] = {0}; 

    
    scanf("%s", S);
    scanf("%s", T);

    
    if (strlen(S) != strlen(T)) {
        printf("NO\n");
        return 0;
    }

    
    for (int i = 0; S[i] != '\0'; i++) {
        fS[S[i] - 'a']++;
    }

    
    for (int i = 0; T[i] != '\0'; i++) {
        fT[T[i] - 'a']++;
    }

    
    for (int i = 0; i < 26; i++) {
        if (fS[i] != fT[i]) {
            printf("NO\n");
            return 0;
        }
    }

    
    printf("YES\n");
    return 0;
}
