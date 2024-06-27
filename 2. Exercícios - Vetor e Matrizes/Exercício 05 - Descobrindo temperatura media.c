#include <stdio.h>
#include <stdlib.h>
/*
    Exercicio 05 - Descobrindo a maior e a menor temperatura media do ano
*/
int main(){

    // Declarando variavel
    int i, mesMaior, mesMenor;
    float temperaturaMedia[8], maior = 0, menor = 99;

    // Recebendo a temperatura media de cada mes
    for(i = 1; i < 9; i ++){
        printf("Digite a temperatura do mes %d: ", i);
        scanf("%f", &temperaturaMedia[i]);
    }

    // Maior e menor temperatura
    for(i = 1; i < 9; i++){
        if(temperaturaMedia[i] > maior){
            maior = temperaturaMedia[i];
            mesMaior = i;
        }
        if(temperaturaMedia[i] < menor){
            menor = temperaturaMedia[i];
            mesMenor = i;
        }
    }

    // Mes de maior temperatura
    switch(mesMaior){
        case 1:
            printf("Maior temperatura = %.2f\tMes: Janeiro\n", maior);
            break;
        case 2:
            printf("Maior temperatura =%.2f\tMes: Fevereiro\n", maior);
            break;
        case 3:
            printf("Maior temperatura = %.2f\tMes: Março\n", maior);
            break;
        case 4:
            printf("Maior temperatura = %.2f\tMes: Abril\n", maior);
            break;
        case 5:
            printf("Maior temperatura = %.2f\tMes: Maio\n", maior);
            break;
        case 6:
            printf("Maior temperatura = %.2f\tMes: Junho\n", maior);
            break;
        case 7:
            printf("Maior temperatura = %.2f\tMes: Julho\n", maior);
            break;
        case 8:
            printf("Maior temperatura = %.2f\tMes: Agosto\n", maior);
            break;
        case 9:
            printf("Maior temperatura = %.2f\tMes: Setembro\n", maior);
            break;
        case 10:
            printf("Maior temperatura = %.2f\tMes: Outubro\n", maior);
            break;
        case 11:
            printf("Maior temperatura = %.2f\tMes: Novembro\n", maior);
            break;
        case 12:
            printf("Maior temperatura = %.2f\tMes: Dezembro\n", maior);
            break;
    }

    // Mes de menor temperatura
    switch(mesMenor){
        case 1:
            printf("Menor temperatura = %.2f\tMes: Janeiro\n", menor);
            break;
        case 2:
            printf("Menor temperatura =%.2f\tMes: Fevereiro\n", menor);
            break;
        case 3:
            printf("Menor temperatura = %.2f\tMes: Março\n", menor);
            break;
        case 4:
            printf("Menor temperatura = %.2f\tMes: Abril\n", menor);
            break;
        case 5:
            printf("Menor temperatura = %.2f\tMes: Maio\n", menor);
            break;
        case 6:
            printf("Menor temperatura = %.2f\tMes: Junho\n", menor);
            break;
        case 7:
            printf("Menor temperatura = %.2f\tMes: Julho\n", menor);
            break;
        case 8:
            printf("Menor temperatura = %.2f\tMes: Agosto\n", menor);
            break;
        case 9:
            printf("Menor temperatura = %.2f\tMes: Setembro\n", menor);
            break;
        case 10:
            printf("Menor temperatura = %.2f\tMes: Outubro\n", menor);
            break;
        case 11:
            printf("Menor temperatura = %.2f\tMes: Novembro\n", menor);
            break;
        case 12:
            printf("Menor temperatura = %.2f\tMes: Dezembro\n", menor);
            break;
    }

   return 0;
}
