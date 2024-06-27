#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor, i, divisores = 0, opcoes;

    do{
        do{
            printf("Digite um valor maior que 1: ");
            scanf("%d", &valor);
        }while(valor < 2);

        printf("Divisores de %d: ", valor);
        for(i = 2; i <= valor/2; i++){
            if(valor % i == 0){
                printf("%d ", i);
                divisores++;
            }
        }
        printf("\n");

        if(divisores != 0)
            printf("%d nao e primo", valor);
        else
            printf("%d e primo", valor);
        printf("\n\n1 - Continuar\n2 - Sair\n");
        scanf("%d", &opcoes);
    }while(opcoes != 2);

    return 0;

}
