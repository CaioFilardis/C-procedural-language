#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Exercicio 07 - Ordenar vetores desordenados
*/
int main(){

    // Declarando variaveis
    int i, contador = 0, troca, copia, num[100];

    // Desenvolvendo a semente
    srand(time(NULL));

    // Gerando aleatoriamente os numeros no vetor
    printf("Digite os numeros\n");
    for(i = 0; i < 100; i++)
       num[i] = rand() % 1000;

    // Antes da ordenação
    printf("Antes da ordenacao\n");
    for(i = 0; i < 5; i++)
        printf("%d ", num[i]);


    do{
        troca = 0;
        contador++;
        for(i = 0; i < 99; i++){
            if(num[i] > num[i + 1]){

                copia = num[i];
                num[i] = num[i + 1];
                num[i + 1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nOrdenado\n");
    for(i = 0; i < 100; i++)
        printf("%3d ", num[i]);

   return 0;
}
