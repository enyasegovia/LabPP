/*
 Arquivo contaPalavras.c
 Autor: Enya Segovia
 */

#include <string.h>
#include <stdio.h>


int faz_parte(char c){
    if(c == '-' || c < 0 || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
        return 1;
    }
    return 0;
}


int contar_palavras(char* texto){
    int n = strlen(texto);
    int i;
    int palavras = 0;
    int anterior = 0; // Guarda a caracteristica do caracter anterior
    int atual; // Guarda a caracteristica do caracter atual

    for(i = 0; i < n; i++){
        atual = faz_parte(texto[i]);

        if(anterior == 0 && atual == 1){
            palavras++;
            //printf("%c\n", texto[i]);
        }

        anterior = atual;
    }

    return palavras;
}


int main(){
    char texto[1024];
    scanf("%1023[^\n]%*c", texto);
    
    printf("%d", contar_palavras(texto));

    return 0;
}
