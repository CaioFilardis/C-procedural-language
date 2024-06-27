#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[10];

}Palavra;


int main(){

   Palavra palavra;

   printf("Digite uma palavra: ");
   gets(palavra.nome);
   //scanf("%50[^\n]", palavra); // ler apenas palavras
   printf("String = %s\n", palavra.nome);

   return 0;
}
