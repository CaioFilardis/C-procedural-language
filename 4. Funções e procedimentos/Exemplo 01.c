#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int time(int temp){
    int horas, minutos , segundos;
    segundos = temp;
    minutos = temp / 60;
    horas = temp / 3600;
    return printf("%dh\t%dmin\t%dseg", horas, minutos,segundos);
}

int main(){

    int x;
    printf("Digite o tempo: ");
    scanf("%d", &x);
    time(x);

    return 0;
}
