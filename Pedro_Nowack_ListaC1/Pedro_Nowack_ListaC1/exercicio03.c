#include <stdio.h>

int main() {
    float produto1, produto2, total;

    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &produto1);
    printf("Digite o valor do segundo produto: ");
    scanf("%f", &produto2);

    total = produto1 + produto2;

    printf("Total da compra: %.2f\n", total);

    return 0;
}
