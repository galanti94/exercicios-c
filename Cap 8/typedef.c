#include <stdio.h>
#include <stdlib.h>

/*Essa é a forma "normal" de criarmos uma estrutura, que resultaria na declaração
struct cadastro cad
posteriormente
*/
struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

/*Agora criei um novo tipo de variável chamada "cad", sendo que essa variável leva
as características da estrutura definida abaixo.
Posso omitir o nome da estrutura, posto que ele é irrelevante*/
typedef struct {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
} cad;

int main()
{
    // Ambas as inicializações resultam na mesma estrutura
    struct cadastro cad1 = {"Gui", 29, "Newton Reis", 325};
    cad cad2 = {"Gui", 29, "Newton Reis", 325};

    printf("%s %d %s %d \n\n", cad1.nome, cad1.idade, cad1.rua, cad1.numero);
    printf("%s %d %s %d \n\n", cad2.nome, cad2.idade, cad2.rua, cad2.numero);

    return 0;
}