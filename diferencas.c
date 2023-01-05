/*
 Arquivo diferencas.c
 Data criacao: 05/jan/23
 Autor: Enya Segovia
 */

#include <stdlib.h>
#include <stdio.h>

int main(){
    float minimo, maximo;
    int i;
    int N;
    float* A;
    float* B;

    scanf("%d", &N);
    A = (float *) malloc(N * sizeof(float));
    B = (float *) malloc((N - 1) * sizeof(float));
    if(A == NULL || B == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    for(i = 0; i < N; i++){
        scanf("%f", A + i);
    }


    for(i = 0; i < N - 1; i++){
        B[i] = A[i + 1] - A[i];
    }

    minimo = B[0];
    maximo = B[0];
    for(i = 0; i < (N - 1); i++){
        if(B[i]<minimo){
            minimo = B[i];
        }
        if(B[i]>maximo){
            maximo = B[i];
        }
    }

    for(i = 0; i < (N - 1); i++){
        printf("%.1f ", B[i]);
    }

    printf("\t%.1f %.1f", minimo, maximo);

    free(A);
    free(B);
    return 0;
}
