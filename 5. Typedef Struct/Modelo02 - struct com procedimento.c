#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    Data data; // Uma struct dentro de uma struct
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p){ // tipo Pessoa, variavel p
    printf("\tNome: %s", p.nome);// o ponto (.) é um operador de acesso a struct
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nas: %d/ %d/ %d\n", p.data.dia, p.data.mes, p.data.ano);
    //uma struct acessando uma struct, estando a segunda "Data data" estando na primeira "Pessoa";
}

int main(){
    Pessoa pessoa;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
    printf("Digite F ou M, para sexo da pessoa: ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite a data de nascimento da pessoa: ");
    scanf("%d%d%d", &pessoa.data.dia, &pessoa.data.mes, &pessoa.data.ano);

    imprimirPessoa(pessoa);

    return 0;
}
