#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Declarando as variáveis
    int i, j, soma = 0, vet1[5], vet2[10], mat[5][10];

    srand(time(NULL)); // Gerando a semente

    for(i = 0; i < 5; i++)
        for(j = 0; j < 10; j++)
            mat[i][j] = rand() % 10; // funcao que gera numeros aleatorios

    // Realizando a soma do conteudo das linhas, percorrendo as colunas
    for(i = 0; i < 5; i++){ // numero de linhas = 5
        for(j = 0; j < 10; j++) // numero de colunas = 10
            soma += mat[i][j];
    vet1[i] = soma; // armazenando a soma em um vetor
    soma = 0;
    }

    // Realizando a soma do conteudo das colunas, percorrendo as linhas
    for(i = 0; i < 10; i++){ // numero de coluas
        for(j = 0; j < 5; j++)
            soma += mat[j][i];
        vet2[i] = soma;
        soma = 0;
    }

    // Imprimindo soma das linhas
    printf("Soma das linhas\n");
    for(i = 0; i < 5; i++)
        printf("%d ", vet1[i]);

    // Imprimindo som das colunas
    printf("\n");
    printf("Soma das colunas\n");
    for(i = 0; i < 10; i++)
        printf("%d ", vet2[i]);

}
