#include <stdio.h>

int main(void) {
    int lado;
    int perimetro;
    int area;

    printf("Valor do lado: ");
    scanf("%d", &lado);

    perimetro = lado * 4;
    area = lado * lado;

    printf("Perimetro: %d\n", perimetro);
    printf("Area: %d\n", area);

    return 0;
}