#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Exercicio 15 - Quadrado Perfeito: soma das colunas, linhas e diagonal principal, devem resultar em um mesmo valor

*/
int main(){

    int l, c, somalinhas = 0, somaColunas = 0, somaDiagonal = 0, contL = 0, contC = 0, tamL = 3, tamC = 3, rep[tamL];
    int mat[tamL][tamC], vetL[tamL], vetC[tamC];

    srand(time(NULL));
    // Gerando os conteudos da matriz
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            mat[l][c] = rand() % 50;
            if(mat[l][c] == mat[l][c - 1]){
                mat[l][c] = rand() % 50;
                rep[c] = mat[l][c];
            }
        }
    }



    for(l = 0; l < tamL; l++)
        for(c = 0; c < tamC; c++){


    }

    //Mostrando os conteudos da matriz na tela
    printf("Conteudo da matriz\n");
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++)
            printf("%2d ", mat[l][c]);
        printf("\n");
    }

    for(l = 0; l < tamL; l++){
        somaDiagonal += mat[l][l];
    }
    printf("Soma das Diagonais\n\t%2d\n", somaDiagonal);

    printf("Soma das linhas\n");
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            somalinhas += mat[l][c];
            printf("\nLinhas %d = %d\n", l, somalinhas);
            if(somalinhas == somaDiagonal){
                vetL[l] = somalinhas;
                contL += 1;
            }
        }
        if(vetL[l] == somaDiagonal)
            printf("\t%2d ", vetL[l]);
        somalinhas = 0;
    }

    printf("\nSoma das colunas\n");
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            somaColunas += mat[c][l];
            if(somaColunas == somaDiagonal){
                vetC[l] = somaColunas;
                contC += 1;
            }
        }
        if(vetC[l] == somaDiagonal)
            printf("\t%2d ", vetC[l]);
        somaColunas = 0;
    }

    if(contL == tamL && contC == tamC)
        printf("\n\nE um quadrado magico");
    else
        printf("Nao e um quadrado perfeito\n");

    return 0;
}


