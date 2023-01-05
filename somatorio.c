/*
Peça ao usuário o número de elementos do tipo ponto flutante (N) que deseja trabalhar.
Depois peça elemento a elemento (ai) quais os números desejados. Imprima os elementos
informados separados pelo sinal de soma (+) seguidos pelo sinal de igual (=) e terminando
com o somatório dos elementos.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float somatorio(float* v, int n){
    int i;
    float soma = 0;

    for(i = 0; i < n; i++){
        soma += v[i];
    }

    return soma;
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
                printf(" + ");
        }
    }

    printf(" = %.2f", somatorio(A, N));

    free(A);
    return 0;
}