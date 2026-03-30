#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char sexo;

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %c\n", sexo);

    return 0;
}
