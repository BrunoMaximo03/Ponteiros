#include <stdio.h>

// Função que troca os valores de dois inteiros usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a; // Guarda o valor de a temporariamente
    *a = *b;       // Atribui o valor de b para a
    *b = temp;     // Atribui o valor temporário (antigo a) para b
}

int main() {
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    // Chamando a função e passando os endereços de x e y
    trocar(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);


    free(a);
    free(b);
    return 0;
}
