#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para novos tipos de dados (Typedef Struct)

            // jeito 01
typedef struct{ //definindo um novo tipo de dado
    int idade;
    char sexo;
    char nome[100];
}Pessoa; // nome do novo tipo de dado

            // jeito 02
struct cachorro{
    char nome[100];
    char raca[100];
};

int main(){

    // Criação para o jeito 01
    Pessoa pessoa; // criação da variavel
  // tipo__variável

    pessoa.idade;
    pessoa.sexo;
    pessoa.nome;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 100, stdin); // entrada de dados do teclado
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade); // entrada de dados do teclado

    printf("Idade: %d\nNome: %s\n", pessoa.idade, pessoa.nome);


    return 0;
}

