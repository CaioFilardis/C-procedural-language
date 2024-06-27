#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*                         Exercício 02 - Com numeros aelatórios */

int main(){

    // Criando as variáveis
    int i;
    int vet1[25], vet2[25], vet3[25];

    // Gerando semente para o rand()
    srand(time(NULL));


    // Gerando conteudo aleatoriamente no vet1 com intervalo entre 0 a 99
    for(i = 0; i < 25; i++)
        vet1[i] = rand() % 100;

    printf("\n\n");

    // Gerando conteudo aleatoriamente no vet2 com intervalo entre 0 a 99
    for(i = 0; i < 25; i++)
        vet2[i] = rand() % 100;

    // Somando vet1 com vet2, armazenando no vet3
    for(i = 0; i < 25; i++)
        vet3[i] = vet1[i] + vet2[i];

    printf("\n");
    // Imprimindo na tela os conteúdos do vet1
    printf("Vetor 01: \n");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet1[i]);

    printf("\n\n");
    // Imprimindo na tela os conteúdos do vet2
    printf("Vetor 02: \n");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet2[i]);

    printf("\n\n");
    // Imprimindo na tela os conteúdos do vet3
    printf("Vetor 03: \n");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet3[i]);

    printf("\n");

    return 0;
}
