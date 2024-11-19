#include <stdio.h>

int main(void) {
    int base_maior;
    int base_menor;
    int altura;
    int area;

    printf("Valor da base maior: ");
    scanf("%d", &base_maior);
    printf("Valor da base menor: ");
    scanf("%d", &base_menor);
    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = (base_maior + base_menor) * altura / 2;

    printf("Area: %d", area);

    return 0;
}