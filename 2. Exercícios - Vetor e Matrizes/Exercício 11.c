#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Exercicio 11 - Diagonal Secundária
*/
int main(){

   int i, j, mat[5][5];

   srand(time(NULL));

   for(i = 0; i < 5; i++){
       for(j = 0; j < 5; j++)
            mat[i][j] = rand() % 50;
   }

   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++)
        printf("%d ", mat[i][j]);
   printf("\n");
   }

   for(i = 0; i < 5; i++)
        printf("%5d ", mat[i][i]);


   printf("\n\n");
   for(i = 0, j = 4; i < 5; i++){
        printf("%5d ", mat[i][j]);
        j--;
    }

    return 0;
}


