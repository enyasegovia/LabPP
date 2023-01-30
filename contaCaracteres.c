/*
 Arquivo contaCaracteres.c
 Autor: Enya Segovia
 */

#include <string.h>
#include <stdio.h>


int contar_letras(char* texto){
    int n = strlen(texto);
    int i;
    int total = 0;

    for(i = 0; i < n; i++){
        if((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')){
            total += 1;
        }
    }

    return total;
}


int contar_numeros(char* texto){
    int n = strlen(texto);
    int i;
    int total = 0;

    for(i = 0; i < n; i++){
        if(texto[i] >= '0' && texto[i] <= '9'){
            total += 1;
        }
    }

    return total;
}


int main(){
    int n, qtd_letras, qtd_numeros;
    char texto[1024];
    scanf("%1023[^\n]%*c", texto);
    
    qtd_letras = contar_letras(texto);
    qtd_numeros = contar_numeros(texto);
    n = strlen(texto);
    printf("letras: %d digitos: %d outros: %d", qtd_letras, qtd_numeros, n - qtd_letras - qtd_numeros);

    return 0;
}
