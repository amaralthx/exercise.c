#include <stdio.h>

int main(void) {
    int valor_largura;
    int valor_altura;
    int perimetro;
    int area;

    printf("Digite o valor da largura: ");
    scanf("%d", &valor_largura);
    printf("Digite o valor da altura: ");
    scanf("%d", &valor_altura);

    perimetro = 2 * valor_largura + 2 * valor_altura;
    area = valor_largura * valor_altura;
    
    printf("Perimetro: %d\n", perimetro);
    printf("Area: %d\n", area);

    return 0;
}