/*
O usuário deve entrar com a quantidade de elementos desejados para um vetor e depois
alimentar cada um deles entre inteiros positivos e negativos. Escreva um programa que
remova todos os números negativos, deixando apenas os positivos e zeros. Imprima o
vetor se contiver algum elemento. Se todos os números forem negativos, avise ao usuário
que o vetor está vazio.
*/

#include <stdlib.h>
#include <stdio.h>

int contar_nao_negativos(int* v, int n){
    int i;
    int qtd = 0;
    for(i = 0; i < n; i++){
        if(v[i] >= 0){
            qtd++;
        }
    }
    return qtd;
}

int main(){
    int i, j;
    int NA;
    int NB;
    int* A;
    int* B;

    scanf("%d", &NA);
    A = (int *) malloc(NA * sizeof(int));
    if(A == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    for(i = 0; i < NA; i++){
        scanf("%d", A + i);
    }

    NB = contar_nao_negativos(A, NA);
    B = (int *) malloc(NB * sizeof(int));
    if(B == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    j = 0;
    for(i = 0; i < NA; i++){
        if(A[i] >= 0){
            B[j] = A[i];
            j++;
        }
    }

    if(NB == 0){
        printf("vazio");
    }else{
        for(i = 0; i < NB; i++){
            printf("%d", B[i]);
            if(i != NB - 1){
                printf(", ");
            }
        }
    }

    free(A);
    free(B);
    return 0;
}