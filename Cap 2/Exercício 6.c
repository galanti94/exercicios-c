#include <stdio.h>
#include <stdlib.h>

int main () {
    double num;
    printf("Insira um número inteiro: ");
    scanf("%lf", &num);
    printf("Você digitou %.5e \n", num);
    return 0;
}