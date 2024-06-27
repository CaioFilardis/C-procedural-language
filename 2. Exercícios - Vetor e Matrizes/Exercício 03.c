#include <stdio.h>
#include <stdlib.h>
 /*                         Exerc�cio 03
    Leia um vetor com tamanho 20, troque o 1� elemento com o �ltimo,
    o 2� com o pen�ltimo... o 10� com o 11�. Imprima o vetN modificado.
*/

int main(){

    // Criando as vari�veis
    int i, j;
    int vetN[20], troca[20];

    // Solicitando ao usu�rio a leitura dos elemntos do vetor
    for(i = 0; i < 20; i++){
        printf("Digite um elemento %d: ", i);
        scanf("%d", &vetN[i]);
    }

    // Atribuindo o conte�do de um vetor para o outro
    for(i = 0; i < 20; i++)
        troca[i] = vetN[i];

    // Realizando a troca de elemento por posi��o
    for(i = 0, j = 19; i < 10; i++, j--)
        vetN[i] = troca[j];

    // Imprimindo na tela o vetor N modificado
    for(i = 0; i < 10; i++)
        printf("%2d ", vetN[i]);

    return 0;
}
