#include<stdio.h>
#include<stdlib.h>
int main(){

    int usuarios, i = 1;
    float salario, mediasalarial, acumulado = 0, salarioBaixo = 0, salarioAlto = 0;

    printf("\nDigite a quantidade de funcionarios: ");
    scanf("%d", &usuarios);
    printf("Digite o salario do %d funcionario: ", i);
    scanf("%f", &salario);

    salarioBaixo = salarioAlto = salario;

    for(i = 2; i<= usuarios; i++){

        acumulado = acumulado + salario;

        printf("Digite o salario do %d funcionario: ", i);
        scanf("%f", &salario);

        if(salario < salarioBaixo){
            salarioBaixo = salario;
        }

        if(salario > salarioAlto)
            salarioAlto = salario;
        }

    mediasalarial = acumulado / usuarios;
    printf("\nMedia dos salarios acumulados: %.2f", mediasalarial);
    printf("\nSalario Alto = %.2f\n", salarioAlto);
    printf("Salario Baixo = %.2f", salarioBaixo);

    return 0;
}
