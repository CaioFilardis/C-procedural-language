#include<stdio.h>
#include<stdlib.h>
int main(){

    int x, y;

    do{
        printf("Digite a primeira coordenada: ");
        scanf("%d", &x);
        printf("Digite a segunda coordenada: ");
        scanf("%d", &y);

        if(x < 0 && y < 0)
            printf("Terceiro quadrante\n");
        if(x < 0 && y > 0)
            printf("Segundo quadrante\n");
        if(x > 0 && y < 0)
            printf("Quarto quadrante\n");
        if(x > 0 && y > 0)
            printf("Primeiro quadrante\n");

    }while(x != 0 && y != 0);

}
