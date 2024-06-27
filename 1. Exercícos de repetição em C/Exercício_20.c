#include<stdio.h>
#include<stdlib.h>
int main(){

    int quadros = 64, graos = 1, i;

    for(i = 2; i <= quadros; i++){
        graos = graos * 2;
        printf("Graos: %d\n", graos);
    }


}
