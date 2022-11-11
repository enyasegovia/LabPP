/*
 * Arquivo fibonacci.c
 * Data criação: 09/nov/22
 * Autor: Enya Segovia
 * Meu programa em c
 */

#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    int j = 1;
    int i = 0;
    int t = 0;
    for(int k = 1; k <= n; k++){
        printf("%d, ", i);
        t = i + j;
        i = j;
        j = t;
        
    }
    printf("...\n");
    return 0;
}