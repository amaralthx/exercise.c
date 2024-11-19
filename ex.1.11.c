#include <stdio.h>

int main(void) {
    int diagonal_maior;
    int diagonal_menor;
    int area;

    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonal_maior);

    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("Area: %d", area);

    return 0;
}