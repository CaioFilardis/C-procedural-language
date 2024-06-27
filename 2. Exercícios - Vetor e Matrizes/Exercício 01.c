#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Preencher um vetor B com o quadrado de cada elemento no vetor A */

int main(){

    int i;
    int vet1[10], vet2[10];

    printf("\n");

    // Solicitando ao usuario a leitura dos elementos
    for(i = 0; i < 10; i ++){
        printf("Digite os elementos do vetor 1, na posicao %d: ", i);
        scanf("%d", &vet1[i]);
    }

    // Armazenando o quadrado de cada elemento do [vetor1] no [vetor2]
    for(i = 0; i < 10; i++)
        vet2[i] = vet1[i] * vet1[i];

    printf("\n\n");

    // Imprimindo na tela os elementos do vetor1
    printf("Elementos do vet1\n");
    for(i = 0; i < 10; i++)
        printf("%3d",  vet1[i]);

    printf("\n\n");

    // Imprimindo o quadrado de cada elemento do vet1 no vet2
    printf("Elementos do vet2: \n");
    for(i = 0; i < 10; i++)
        printf("%7d", vet2[i]);


    return 0;
}

