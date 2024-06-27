#include<stdio.h>
#include<stdlib.h>
int main(){

    int num;

    do{
        printf("============ Calculadora ==========\n");
        printf("1 - Soma\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha um numero: ");
        scanf("%d", &num);

        switch(num){
            case 1:{
                int valor1, valor2, soma;
                printf("Digite dois valores: \n");
                scanf("%d%d", &valor1, &valor2);
                soma = valor1 + valor2;
                printf("Valor da soma = %d\n\n", soma);
            }break;

            case 2:{
                int valor1, valor2, subtracao;
                printf("Digite dois valores: \n");
                scanf("%d%d", &valor1, &valor2);
                subtracao = valor1 - valor2;
                printf("Valor da subtracao = %d\n\n", subtracao);
            }break;

            case 3:{
                int valor1, valor2, multiplicar;
                printf("Digite dois valores: \n");
                scanf("%d%d", &valor1, &valor2);
                multiplicar = valor1 * valor2;
                printf("Valor da multiplicacao = %d\n\n", multiplicar);
            }break;

            case 4:{
                int valor1, valor2;
                double dividir;
                printf("Digite dois valores: \n");
                scanf("%d%d", &valor1, &valor2);
                if(valor2 != 0){
                    dividir = (float) valor1 / valor2;
                    printf("Valor da divisao = %.2f\n\n", dividir);
                }
                else{
                    printf("Digite novamente o valor2: ");
                    scanf("%d", &valor2);
                    dividir = (float) valor1 / valor2;
                    printf("Valor da divisao = %.2f\n\n", dividir);
                }
            }break;
        }
    }while(num != 0);

    printf("Fim da calculadora");
    return 0;
}
