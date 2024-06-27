#include<stdio.h>
#include<stdlib.h>
int main(){

    int idade, usuarios, idadeMenor = 999, idadeMaior = 0, quantMulheres = 0;
    char sexo;
    float salario, mediaSalarial = 0;

    printf("Digite a quantidade de usuarios: ");
    scanf("%d", &usuarios);

    for(int i = 1; i <= usuarios; i++){
        printf("Digite a idade, o sexo e o salario: \n");
        scanf("%d %c%f", &idade, &sexo, &salario);

        mediaSalarial += salario;

        if(idadeMenor > idade)
            idadeMenor = idade;
        if(idadeMaior < idade)
            idadeMaior = idade;

        if(sexo == 'F' && salario <= 2000.00)
            quantMulheres++;

    }

    printf("\nMedia do salari do grupo = %.2f\n", mediaSalarial);
    printf("Idade maior = %d\nIdade Menor = %d\n", idadeMaior, idadeMenor);
    printf("Mulhere com salario acima de R$2 mil: %d\n", quantMulheres);


}
