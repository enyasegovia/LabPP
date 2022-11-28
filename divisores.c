/*
 Arquivo divisores.c
 Data criacao: 24/nov/22
 Autor: Enya Segovia
 */

#include <stdio.h>

int main(){

    int numero;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if (numero % i == 0){
            printf("%d, ", i);
        }
    }


    return 0;
}