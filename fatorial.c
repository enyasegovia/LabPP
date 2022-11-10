/*
 Arquivo fatorial.c
 Data criacao: 10/nov/22
 Autor: Enya Segovia
 Calculando fatorial
 */

#include <stdio.h> 

int main(int argc, char *argv[]){

    int valor = 0;
    int resposta = 1;


    printf("Digite um numero.\n");
    scanf("%d", &valor);

    for(int i=1; i<=valor; ++i){

        resposta = resposta * i;
    }

    //for(int i= 0; i<valor; i++){}


    printf("%d", resposta);

return 0;
}