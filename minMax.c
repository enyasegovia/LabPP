/*
 Arquivo minMax.c
 Data criação: 12/dez/22
 Autor: Enya Segóvia
 */


#include <stdlib.h>
#include <stdio.h> 

int main(){
    int i;
    int numero;
    int minimo;
    int maximo;


    printf("Escreva a quantidade de elementos.\n");
    scanf("%d", &numero);

    int* vetor;
    vetor = (int *) malloc(numero * sizeof(int));
    if(vetor == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    for(i = 0; i < numero; i++) {
        printf("Coloque o elemento n%d\n", i+1);
        scanf("%d", vetor+i);
    }


    minimo = vetor[0];
    maximo = vetor[0];

    for(i = 0; i < numero; i++){
        if(vetor[i]<minimo){
            minimo = vetor[i];
        }
        if(vetor[i]>maximo){
            maximo = vetor[i];
        }
    }

    for(int i=0; numero> i; i++){

        if(vetor[i]==maximo){
            printf("%d> ", maximo);
        }
        
        if(vetor[i]==minimo){
            printf("%d< ", minimo);
        }

        if(vetor[i]!=minimo && vetor[i]!=maximo){
        printf("%d ", vetor[i]);
        }

    }

    free(vetor);
    return 0;
}


