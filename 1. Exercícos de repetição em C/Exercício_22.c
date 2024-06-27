#include<stdio.h>
#include<stdlib.h>
int main(){

    int Chicocresce, Zecresce, anos = 1;
    float alturaChico = 1.50, alturaZe = 1.10;

    do{
        alturaChico = alturaChico + 0.02;

        alturaZe = alturaZe + 0.03;

        anos++;

    }while(alturaZe < alturaChico);

    printf("Sao necessarios %d anos\n", anos);
    return 0;

}
