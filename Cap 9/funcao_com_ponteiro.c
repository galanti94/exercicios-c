#include <stdio.h>
#include <stdlib.h>

void soma(int *x)
{
    (*x)++; // Acessei o valor armazenado na memória e incrementei 1
    printf("%d \n", *x);
}

int main()
{
    int x = 0;
    printf("%d\n", x);

    soma(&x); // Enviei a referência na memória

    printf("%d\n", x);
    return 0;
}