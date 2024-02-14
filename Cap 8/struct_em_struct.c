#include <stdio.h>
#include <stdlib.h>
// #include <locale.h>

struct endereco
{
    char rua[50];
    int numero;
};

struct cadastro
{
    char nome[50];
    int idade;
    struct endereco ende; // Structure dentro de outra structure
};

int main()
{
    struct cadastro cad;

    printf("Nome: ");
    fgets(cad.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &cad.idade);
    getchar();

    printf("Rua: ");
    fgets(cad.ende.rua, 50, stdin);

    printf("Número: ");
    scanf("%d", &cad.ende.numero);
    getchar();

    return 0;
}