#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 1) // primeiro terno
        return 0;
    else{
        if(n == 2) // segundo termo
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

    int x;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &x);

    printf("O termo %d eh: %d\n", x, fibonacci(x));


    return 0;

}
