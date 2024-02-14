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
    struct cadastro cad1;
    cad cad2;

    return 0;
}