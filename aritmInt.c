/*
 * Arquivo aritmInt.c
 * Data criação: 04/nov/22
 * Autor: Enya Segóvia
 * Meu primeiro programa em c
 */

#include <stdio.h> 

int main(int argc, char *argv[]){
    
    int x=0;
    int y=0;

    printf("Digite seu primeiro numero.\n");
    scanf("%d", &x);
    
    printf("Digite seu segundo numero.\n");
    scanf("%d", &y);
    
    int soma = x + y;

    printf("%d + %d = %d \n", x, y, soma); 

    int subtracao = x - y;

    printf("%d - %d = %d \n", x, y, subtracao);

    int divisao = x / y;

    printf("%d / %d = %d \n", x, y, divisao); 

    int multiplicacao = x * y;

    printf("%d * %d = %d \n", x, y, multiplicacao);

    int modulo = x % y;

    printf("%d %% %d = %d \n", x, y, modulo);

    

return 0;    
}