#include <stdio.h>

int main(void) {
    int valor_base;
    int valor_altura;
    int area;

    printf("Digite o valor da base: ");
    scanf("%d", &valor_base);
    printf("Digite o valor da altura: ");
    scanf("%d", &valor_altura);
    
    area = valor_base * valor_altura / 2;

    printf("Area: %d", area);

    return 0;
}