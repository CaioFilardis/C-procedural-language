#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j = 0, tam = 0;
    char str1[50], str2[50];

    printf("Digite algumas palavras: ");
    gets(str1);

    // determinado o tamanho do caractere
    for(i = 0; str1[i] != '\0'; i++){
        tam++;
    }

    // imprimindo caractere de tras pra frente
    for(i = tam; i >= 0; i--)
        printf("%c", str1[i]);




}
