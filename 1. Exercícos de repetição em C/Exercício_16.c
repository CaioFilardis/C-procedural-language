#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor, valormenor, divisivel, i = 1;

    for(valor = 1, valormenor = valor; valor <= 10; valor++){
        for(i = 1; i <= 10; i++){
            if(i % valor == 0)
                printf("%d e divisivel\n", valor);
            else
                printf("%d nao e divisivel\n", valor);
        }
        if(valor < valormenor)
            valormenor = valor;
    }
    printf("Valor menor = %d", valormenor);
}
