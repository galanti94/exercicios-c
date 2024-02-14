#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>


struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(){
    //setlocale(LC_ALL, "");

    struct cadastro cad1;

    printf("Nome: ");
    gets(cad1.nome);

    printf("Idade: ");
    scanf("%d", &cad1.idade);
    getchar();    

    printf("Número: ");
    scanf("%d", &cad1.numero);
    getchar();

    printf("Rua: ");
    gets(cad1.rua);    

    return 0;
}