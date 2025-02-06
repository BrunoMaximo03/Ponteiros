#include <stdlib.h>
#include <stdio.h>


int main() {

    char str[] = "Ola mundo";
    char* ponteiro = str; //aponta para o primeiro endereço de memória do array que no caso é o O
    int conta = 0;
    str[strcspn(str,"\n")] = '\0';


    for(int i = 0; i < strlen(str); i++) {
        if(*(ponteiro + i) != '\0') {
            conta++;
        }
    }
    printf("Existem %d caracteres na string\n",conta);

    free(ponteiro);

    return 0;
}
