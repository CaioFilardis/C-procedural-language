#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Declarando as matrizes
   int i, j, matA[3][3], matB[3][3], matC[3][3];

    srand(time(NULL));

   // Gerando conteudo da matriz A
   for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            matA[i][j] = rand() % 10;

   // Gerando o conteudo da matriz B
   for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            matB[i][j] = rand() % 10;

   // Somando o conteudo da matriz A e B, e armazenando na matriz C
   for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            matC[i][j] = matA[i][j] + matB[i][j];

    // Imprimindo na tela os conteudos da matriz A
    printf("Matriz A\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf(" %2d ", matA[i][j]);
        printf("\n");
    }

    // Imprimindo na tela os conteudos da matriz B
    printf("\nMatriz B\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf(" %2d ", matB[i][j]);
        printf("\n");
    }

    // Imprimindo na tela os conteudos da matriz C
    printf("\nMatriz C\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf(" %2d ", matC[i][j]);
        printf("\n");
    }

    return 0;
}
