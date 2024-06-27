#include<stdio.h>
#include<stdlib.h>
int main(){

    int valor1, valor2, mult = 0, i;

    printf("\nDigite o valor do primeiro numero: ");
    scanf("%d", &valor1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &valor2);

    for(i = 1; i <= valor2; i++){
        mult = mult + valor1;
    }
    printf("\nMultiplicao: %d", mult);
    return 0;
}
