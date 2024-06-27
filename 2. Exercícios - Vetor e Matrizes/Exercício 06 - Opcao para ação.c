#include <stdio.h>
#include <stdlib.h>
/*
    Exercicio 06 - opcoes para acao
*/
int main(){

// Declarando variaveis
    int i, num[5], codigo;

// Lendo os numeros
    printf("Digite os numeros inteiros abaixo\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &num[i]);

// Lendo o codigo e realizando ações opcionais ao usuario
   do{
        printf("\n0 - finaliza programa\n");
        printf("1 - imprime o vetor na ordem\n");
        printf("2 - imprime o vetor na ordem inversa\n");
        scanf("%d", &codigo);

        printf("\n");
        if(codigo == 1){
            for(i = 0; i < 5; i++)
                printf("%d ", num[i]);
        }
        if(codigo == 2){
            for(i = 4; i >= 0; i--)
                printf("%d ", num[i]);
        }

        printf("\n");
    } while(codigo != 0);


    printf("\n");
   return 0;
}
