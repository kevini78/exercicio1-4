#include <stdio.h>

int main() {
    double peso;

    printf("Digite o peso da pessoa em kg: ");
    scanf("%lf", &peso);

    if (peso < 60) {
        printf("O peso é menor do que 60 kg.\n");
    } else {
        printf("O peso é igual ou maior do que 60 kg.\n");
    }

    return 0;






