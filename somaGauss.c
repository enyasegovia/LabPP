/*
 * Arquivo aritmInt.c
 * Data criacao: 04/nov/22
 * Autor: Enya Segovia
 * Calculando soma de Gauss
 */

#include <stdio.h> 

int main(int argc, char *argv[]){

    int valor = 0;
    int resposta = 0;


    printf("Digite um numero.\n");
    scanf("%d", &valor);

    for(int i=0; i<=valor; ++i){

        resposta = resposta + i;
    }
    printf("%d", resposta);

return 0;
}