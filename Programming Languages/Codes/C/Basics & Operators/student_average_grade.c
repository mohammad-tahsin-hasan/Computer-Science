#include <stdio.h>
int main() {
    float a, b, c, d, final;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float avrage = ((a * 2 + b * 3 + c * 4 + d * 1) / (10.0));
    printf("Media: %0.1f\n", avrage);
    if (avrage >= 7.0) {
        printf("Aluno aprovado.\n");
        return 0;
    }

    else if (avrage >= 5.0 && avrage <= 6.9) {
        printf("Aluno em exame.\n");
        float all;
        scanf("%f", &all);
        printf("Nota do exame: %.1f\n", all);

        final = (avrage + all) / 2.0;
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f", final);
    } else {
        printf("Aluno reprovado.\n");
    }

    // if (final >= 5.0) {
    //    
    // } else {
    //     printf("Aluno reprovado.\n");
    // }

    return 0;
}