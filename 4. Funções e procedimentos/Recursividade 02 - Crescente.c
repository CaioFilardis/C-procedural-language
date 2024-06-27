#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void imprimir(int x){
    if(x == 0) // Define a para do procedimento
        printf("%d ", x);
    else{
        imprimir(x - 1); // realiza a impress�o de N at� zero de forma crescente
        printf("%d ", x);
    }
}

int main(){

    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    imprimir(n);

    return 0;
}
