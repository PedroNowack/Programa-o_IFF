#include <stdio.h>

int main() {
    char nome[50];
    char sexo;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("\nFuncionario: %s\n", nome);
    printf("Sexo: %c\n", sexo);

    return 0;
}
