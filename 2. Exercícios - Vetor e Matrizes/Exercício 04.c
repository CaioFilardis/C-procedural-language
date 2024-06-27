#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, quantVendida[10], maisVendido = 0;
    float valorParcial = 0, valorUnit[10], valorTotal = 0;

    for(i = 0; i < 10; i++){
        printf(" Digite os valores unitarios e quantidade vendida: ");
        scanf("%f%d", &valorUnit[i], &quantVendida[i]);
    }

    printf("\n\n");
    for(i = 0; i < 10; i++){
        valorParcial = valorUnit[i] * quantVendida[i];
        printf("Vendidos: %d\tValor Unitario: R$ %.2f\t Valor total: R$ %.2f\n", quantVendida[i], valorUnit[i], valorParcial);
        valorTotal += valorParcial;
    }
    printf("\n");
    printf("Valor total das vendas: R$ %.2f\n", valorTotal);
    printf("\n");
    printf("Comissao das vendas: R$ %.2f", valorTotal * 0.05);


    printf("\n\n");
    for(i = 0; i < 10; i++){
        if(quantVendida[i] > maisVendido)
            maisVendido = quantVendida[i];
    }

    for(i = 0; i < 10; i++){
        if(quantVendida[i] == maisVendido){
            printf("Mais Vendidos: R$ %.2f\tPosicao: %d\n", valorUnit[i], i);
        }
    }

    printf("\n");
    return 0;

}
