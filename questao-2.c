#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado A do triangulo: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B do triangulo: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C do triangulo: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados fornecidos formam um triangulo.\n");

        if (a == b && b == c) {
            printf("E um triangulo equilatero (todos os lados sao iguais).\n");
        } else if (a == b || a == c || b == c) {
            printf("E um triangulo isosceles (dois lados sao iguais).\n");
        } else {
            printf("E um triangulo escaleno (todos os lados sao diferentes).\n");
        }
    } else {
        printf("Os lados fornecidos NAO formam um triangulo.\n");
    }

    return 0;
}
