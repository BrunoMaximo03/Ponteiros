#include <stdio.h>

void copiaArray(int* arrayOriginal, int* arrayCopia, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arrayCopia[i] = arrayOriginal[i]; // Copiando os valores corretamente
    }
}

int main() {
    int array[10] = {300,700,10000,38000,2000,100,500,290,380,420};
    int vetor[10];

    // Passando o tamanho correto
    copiaArray(array, vetor, sizeof(vetor) / sizeof(vetor[0])); //sizeof(vetor) = 40 bytes(10posicoes * 4 bytes cada) divido por array[0] = 40 / 4 = 10 que é o tamanho

    // Testando se a cópia funcionou
    printf("Array copiado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
