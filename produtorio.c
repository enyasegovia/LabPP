/*
 Arquivo produtorio.c
 Data criacao: 05/jan/23
 Autor: Enya Segovia
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float produtorio(float* v, int n){
    int i;
    float produto = 1;

    for(i = 0; i < n; i++){
        produto *= v[i];
    }

    return produto;
}


int main(){
    int i;
    int N;
    float* A;

    scanf("%d", &N);
    A = (float *) malloc(N * sizeof(float));
    if(A == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    for(i = 0; i < N; i++){
        scanf("%f", A + i);
    }

    for(i = 0; i < N; i++){
        printf("%.2f", A[i]);
        if(i != N - 1){
                printf(" * ");
        }
    }

    printf(" = %.2f", produtorio(A, N));

    free(A);
    return 0;
}
