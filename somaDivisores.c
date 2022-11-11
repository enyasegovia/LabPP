/*
 * Arquivo somaDivisores.c
 * Data criação: 09/nov/22
 * Autor: Enya Segovia
 * Meu programa em c
 */

#include <stdio.h> 


int main(int argc, char *argv[]){
   
    int n;
    scanf("%d", &n);
  
   int soma = 0;
    for(int i = 1; i <= n; i++) 
    if(n % i == 0) soma = soma + i; 
    printf("%d\n", soma);
   
   
   
    return 0;
}