#include <stdlib.h>
#include <stdio.h>


    int main() {

        int var = 10;  //variável que contem o valor 10
        int* ponteiro = &var;  // ponteiro que aponta para o endereço de var;

        printf("O valor eh %d",*ponteiro); // foi usado * para acessar o que tem no endereço, no caso o que tem no endereço de var que é 10

        return 0;
    }
