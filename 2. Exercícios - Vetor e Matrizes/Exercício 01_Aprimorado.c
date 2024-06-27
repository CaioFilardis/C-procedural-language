#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Preencher um vetor B com o quadrado de cada elemento pseudo-aleatório no vetor A */

int main(){

    int i;
    int vet1[10], vet2[10];

    // Atribuindo a semente ao "rand" e usando recurso da função "horário" da máquina
    srand(time(NULL));

    // Gerando os elemntos do vet1 de forma aleatória
    for(i = 0; i < 10; i ++)
        vet1[i] = rand() % 500;

    // Armazenando o quadrado de cada elemento do [vetor1] no [vetor2]
    for(i = 0; i < 10; i++)
        vet2[i] = vet1[i] * vet1[i];

    // Imprimindo na tela os elementos do vetor1

    printf("Elementos do vet1:\n");
    for(i = 0; i < 10; i++)
        printf("%5d", vet1[i]);

    printf("\n\n");

    // Imprimindo o quadrado de cada elemento do vet1 no vet2

    printf("Elementos do vet2:\n");
    for(i = 0; i < 10; i++)
        printf("%10d", vet2[i]);
    printf("\n");

    return 0;
}

