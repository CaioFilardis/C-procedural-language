#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fatorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);// retorna a fun��o dentro da fun��o
}

int main (){
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Valor do fatorial de %d: %d", x, fatorial(x));


}
