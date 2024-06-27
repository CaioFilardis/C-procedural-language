#include <stdio.h>
#include <stdlib.h>
/*
    Exercicio 07 - Ordenar vetores desordenados
*/
int main(){

    int i, contador = 0, troca, copia, num[5];

    printf("Digite os numeros\n");
    for(i = 0; i < 5; i++)
       scanf("%d", &num[i]);

    printf("Antes da ordenacao\n");
    for(i = 0; i < 5; i++)
        printf("%d ", num[i]);

    do{
        troca = 0;
        contador++;
        for(i = 0; i < 4; i++){
            if(num[i] > num[i + 1]){

                copia = num[i];
                num[i] = num[i + 1];
                num[i + 1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nOrdenado\n");
    for(i = 0; i < 5; i++)
        printf("%d ", num[i]);

   return 0;
}
