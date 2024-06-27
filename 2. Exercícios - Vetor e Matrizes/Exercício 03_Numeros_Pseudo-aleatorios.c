#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*                         Exercício 03
    Leia um vetor com tamanho 20, troque o 1ª elemento com o último,
    o 2ª com o penúltimo... o 10ª com o 11º. Imprima o vetN modificado.
*/

int main(){

    // Criando as variáveis
    int i, j;
    int vetN[20], troca[20];

    // Gerand a "semente" para a função rand()
    srand(time(NULL));

    // Armazendo elementos de forma pseudo-aleatória, no intervalo entre 0 a 99
    printf("Gerando os elementos:\n");
    for(i = 0; i < 20; i++)
        vetN[i] = rand() % 100;

    // Imprimindo na tela os valores gerados, a título de ordem
    for(i = 0; i < 20; i++)
        printf("%d  ", vetN[i]);

    // Atribuindo o conteúdo de um vetor para o outro
    for(i = 0; i < 20; i++)
        troca[i] = vetN[i];

    // Realizando a troca de elemento por posição
    for(i = 0, j = 19; i < 10; i++, j--)
        vetN[i] = troca[j];

    // Imprimindo na tela o vetor N modificado
    printf("\n\n");
    for(i = 0; i < 10; i++)
        printf("%d  ", vetN[i]);

    return 0;
}
