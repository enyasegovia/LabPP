/*
 Arquivo dec2bin.c
 Autor: Enya Segovia
 */

#include <string.h>
#include <stdio.h>
#include <math.h>


void binario(unsigned long long int decimal, char* bin){
    int i = 0;
    int resto;
    int tamanho;
    char temp;

    while(decimal > 0){
        resto = decimal % 2;
        if(resto == 0){
            bin[i] = '0';
        }else{
            bin[i] = '1';
        }
        i++;

        decimal = decimal / 2;
    }

    bin[i] = '\0';
    tamanho = strlen(bin);

    for(i = 0; i < tamanho / 2; i++){
        temp = bin[i];
        bin[i] = bin[tamanho - i - 1];
        bin[tamanho - i - 1] = temp;
    }
}


int main(){
    long long unsigned int dec;
    char bin[65];

    scanf("%llu", &dec);
    
    binario(dec, bin);

    printf("%s", bin);

    return 0;
}
