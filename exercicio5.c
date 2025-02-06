#include <stdlib.h>
#include <stdio.h>


int main() {

    int* vetor;
    int tamanho;

    printf("Tamanho vetor: ");
    scanf("%d",&tamanho);
    vetor = (int*)malloc(tamanho* sizeof(int));

    for(int i = 0; i < tamanho; i++) {  // for para preencher o vetor
        printf("Digite um numero para a posicao %d: ",i);
        scanf("%d",&vetor[i]); //Resumindo vetor[i]: Acessa o valor armazenado no índice i ///// &vetor[i]: Acessa o endereço de memória onde o valor está armazenado.
    }

    for(int i = 0; i < tamanho; i++) { // for para exibir os valores no vetor
        printf("Na posicao %d temos o valor %d   ",i,vetor[i]);
    }

    free(vetor);
    return 0;
}
