/*
 Arquivo quaisDiv.c
 Data criacao: 05/jan/23
 Autor: Enya Segovia
 */

#include <stdlib.h> // malloc free
#include <stdio.h> // printf scanf


int main(){
    int i;
    int N;
    int R;
    int* A;

    scanf("%d", &N);
    A = (int *) malloc(N * sizeof(int));
    if(A == NULL){
        printf("ERRO DE ALOCACAO DE MEMORIA!");
        exit(1);
    }

    for(i = 0; i < N; i++){
        scanf("%d", A + i);
    }
    scanf("%d", &R);

    for(i = 0; i < N; i++){
        printf("%d", A[i]);
        if(R % A[i] == 0){
            printf("#");
        }
        if(i != N - 1){
            printf(" ");
        }
    }

    free(A);
    return 0;
}
