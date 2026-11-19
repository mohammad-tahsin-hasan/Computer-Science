#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    int i, n, v = 0, c = 0, b = 0;
    char s[100];
    printf("Enter the sentence :");
    fgets(s,sizeof(s),stdin);
    n = strlen(s);
    for (i = 0; i <= n; i++) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u')
            v = v + 1;

        else if (s[i] == ' ')
            b = b + 1;

        else
            c = c + 1;
    }
    printf("\n the numbers of vowels : %d \n the numbers of consonants : %d \n the numbers of blank spaces: %d ", v, c, b);
    return 0;
}
