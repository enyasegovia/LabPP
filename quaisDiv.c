/*
Peça ao usuário a quantidade de elementos do tipo inteiro (N) que deseja trabalhar.
Depois peça elemento a elemento (a_i) quais os números desejados. Na sequência, peça o
inteiro que será a referência (R) para encontrar no vetor quem é seu divisor. Imprima os
números informados, mas, logo após um divisor de R, imprima o caractere #.

Exemplo: se o usuário informar que deseja trabalhar com 6 números que são 3, 1, 2, 42,
25 e 12, e quer o 12 como referência, imprima 3# 1# 2# 42 25 12#.
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