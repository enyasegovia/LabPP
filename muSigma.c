/*
Peça ao usuário o número de elementos do tipo ponto flutante (N) que deseja trabalhar.
Depois peça elemento a elemento (a_i) quais os números desejados. Calcule e apresente a
média (μ) e o desvio-padrão (σ, assuma a versão com base na população) da coleção de
números:
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float media(float* v, int n){
    int i;
    float soma = 0;
    if(n == 0){
        return 0;
    }

    for(i = 0; i < n; i++){
        soma += v[i];
    }

    return soma / n;
}


float dp(float *v, int n){
    int i;
    float v_barra = media(v, n);
    float soma = 0;

    for(i = 0; i < n; i++){
        soma += pow(v[i] - v_barra, 2);
    }
    
    return sqrt(soma / n);
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

    printf("media %.2f, desvio %.2f", media(A, N), dp(A, N));

    free(A);
    return 0;
}