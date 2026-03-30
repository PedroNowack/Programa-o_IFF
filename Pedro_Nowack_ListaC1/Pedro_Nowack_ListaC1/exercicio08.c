#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia: %.2f\n", distancia);

    return 0;
}
