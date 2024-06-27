#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Exercicio 11 - Diagonal Transposta
*/
int main(){

    int c, l, tamL = 5, tamC = 4;
    int mat[tamL][tamC], transp[tamC][tamL];

    for(l = 0; l < tamL; l++)
        for(c = 0; c < tamC; c++)
            mat[l][c] = rand() % 50;

    printf("Matriz Original\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 4; c++)
            printf(" %2d ", mat[l][c]);
    printf("\n");
    }

    for(l = 0; l < tamL; l++)
        for(c = 0; c < tamC; c++)
          transp[c][l] = mat[l][c];


    printf("\n");
    for(l = 0; l < tamC; l++){
        for(c = 0; c < tamL; c++)
            printf("%2d ", transp[l][c]);
    printf("\n");
    }



    return 0;
}


