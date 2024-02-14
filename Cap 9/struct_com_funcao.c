#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int idade;
} id;

void mudaIdade (id *meuid) {
    meuid->idade = 30;
}

void mudaNome (id *meuid) {
    strcpy(meuid->nome, "Guilherme");
}

int main()
{
    id meuID = {"Gui", 29};
    printf("%d \n", meuID.idade);
    mudaIdade(&meuID);
    printf("%d \n", meuID.idade);

    printf("%s \n", meuID.nome);
    mudaNome(&meuID);
    printf("%s \n", meuID.nome);

    return 0;
}