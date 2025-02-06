#include <stdlib.h>
#include <stdio.h>


int main() {
    
    int num;
    int* ponteiro;
    int* ponteiroDoPonteiro;

    num = 5;
    ponteiro = &num;
    ponteiroDoPonteiro = ponteiro;

    printf("O valor usando o ponteiro do ponteiro eh %d \n", *ponteiroDoPonteiro);
    
    free(ponteiro);
    free(ponteiroDoPonteiro);
    return 0;

}
