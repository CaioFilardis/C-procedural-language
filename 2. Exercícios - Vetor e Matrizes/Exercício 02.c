#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*                                  Exerc�cio 02
            Somar o conte�do de dois vetores e armazenar em um terceiro vetor
*/

int main(){

    // Criando as vari�veis
    int i;
    int vet1[25], vet2[25], vet3[25];

    // Solicitando ao usu�rio que leia um conte�do do primeiro vetor
    for(i = 0; i < 25; i++){
        printf("Digite o elemento do vetor 1: ");
        scanf("%d", &vet1[i]);
    }

    printf("\n\n");
    // Solicitando ao usu�rio que leia um conte�do do segundo vetor
    for(i = 0; i < 25; i++){
        printf("Digite o elemnto do vetor 2: ");
        scanf("%d", &vet2[i]);
    }

    // Somando vet1 com vet2, armazenando no vet3
    for(i = 0; i < 25; i++)
        vet3[i] = vet1[i] + vet2[i];

    printf("\n");
    // Imprimindo na tela os conte�dos do vet1
    for(i = 0; i < 25; i++)
        printf("Vetor 01: %d\n", vet1[i]);

    printf("\n");
    // Imprimindo na tela os conte�dos do vet2
    for(i = 0; i < 25; i++)
        printf("Vetor 02: %d\n", vet2[i]);
    printf("\n");
    // Imprimindo na tela os conte�dos do vet3
    for(i = 0; i < 25; i++)
        printf("Vetor 03: %d\n", vet3[i]);


    return 0;
}
