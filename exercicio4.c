#include <stdlib.h>
#include <stdio.h>


    int retornaMaiorValor(int num1, int num2) {
        if(num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }

    int main() {

        int num1 = 10, num2 = 20, num3 = 10;

        int (*ponteiro)(int,int) = retornaMaiorValor; // SINTAXE CRIANDO UM PONTEIRO PARA A FUNÇÃO \\\(retorno (*nomePonteiro)(tipo_param1, tipo_param2, ...) = nome_da_funcao);\\\\
       
        int resultado = ponteiro(num1, num2);

        printf("O maior valor entre %d e %d eh: %d\n", num1, num2, resultado);
        return 0;
    }
