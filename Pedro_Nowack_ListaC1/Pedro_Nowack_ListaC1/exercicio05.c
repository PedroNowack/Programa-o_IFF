#include <stdio.h>

int main() {
    float valor, resultado;
    const float taxa = 1.23;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    resultado = valor * taxa;

    printf("Valor final: %.2f\n", resultado);

    return 0;
}
