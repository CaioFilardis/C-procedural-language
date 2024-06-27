#include <stdio.h>
#include <stdlib.h>
 /*                         Exercício 03
    Leia um vetor com tamanho 20, troque o 1ª elemento com o último,
    o 2ª com o penúltimo... o 10ª com o 11º. Imprima o vetN modificado.
*/

int main(){

    // Criando as variáveis
    int i, j;
    int vetN[20], troca[20];

    // Solicitando ao usuário a leitura dos elemntos do vetor
    for(i = 0; i < 20; i++){
        printf("Digite um elemento %d: ", i);
        scanf("%d", &vetN[i]);
    }

    // Atribuindo o conteúdo de um vetor para o outro
    for(i = 0; i < 20; i++)
        troca[i] = vetN[i];

    // Realizando a troca de elemento por posição
    for(i = 0, j = 19; i < 10; i++, j--)
        vetN[i] = troca[j];

    // Imprimindo na tela o vetor N modificado
    for(i = 0; i < 10; i++)
        printf("%2d ", vetN[i]);

    return 0;
}
