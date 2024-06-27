#include<stdio.h>
#include<stdlib.h>
int main(){

    int idade, menoridade = 999, i;

    for(i = 0; i <=5; i++){
        printf("digite a idade: ");
        scanf("%d", &idade);

        if(idade <  menoridade)
            menoridade = idade;
    }
    printf("Menor idade = %d", menoridade);
    return 0;
}
