#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o raio do terreno circular: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area: %.2f\n", area);

    return 0;
}
