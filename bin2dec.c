#include <string.h>
#include <stdio.h>
#include <math.h>

void tratar_input(char* buffer, char* binario){
    int i;
    int j = 0;
    int size_buffer = strlen(buffer);
    
    for(i = 0; i < size_buffer; i++){
        if(buffer[i] == '0' || buffer[i] == '1'){
            binario[j] = buffer[i];
            j++;            
        }
    }

    binario[j] = '\0';
}


long long unsigned int decimal(char* binario){
    int size_binario = strlen(binario);
    long long unsigned int valor = 0;
    int i;

    for(i = 0; i < size_binario; i++){
        if(binario[size_binario - i - 1] == '1'){
            valor += pow(2, i);
        }
    }

    return valor;
}


int main(){
    char buffer[1024];
    char binario[65];
    long long unsigned int dec;
    scanf("%1023[^\n]%*c", buffer);
    
    tratar_input(buffer, binario);

    dec = decimal(binario);
    printf("%llu", dec);

    return 0;
}