#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Exercicio 14 - valores Abaixo Diagonal Principal
*/
int main(){

    int l, c, mat[4][4], vet[4], maior;

    srand(time(NULL));

    for(l = 0; l < 4; l++)
        for(c = 0; c < 4; c++)
            mat[l][c] = rand() % 50;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++)
            printf("%2d ", mat[l][c]);
        printf("\n");
    }

    printf("\nDiagonal principal\n");
    for(l = 0; l < 4; l++){
        vet[l] = mat[l][l];
        printf("%2d ", vet[l]);
    }
    printf("\n");
    printf("\nValores Abaixo da diagonal principal\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++)
            if(mat[c][l] < vet[l])
                printf("%2d ", mat[c][l]);
    }


    return 0;
}


