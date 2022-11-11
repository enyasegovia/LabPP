/*
 * Arquivo cosTaylor.c
 * Data criação: 09/nov/22
 * Autor: Enya Segovia
 * Meu programa em c
 */

#include <stdio.h> 

int fatorial(int valor){

    int resposta = 1;

    for(int i=1; i<=valor; ++i){

        resposta = resposta * i;
    }


return resposta;
}

int main(){

    int n;
    double x;
    double pi = 3.141592;
    double cos = 0.0;
    scanf("%d", &n);
    scanf("%lf", &x);
    int i = 0;

    while(i <= n){
        int a = 1;
        double b = 1.00000;
        for(int j = 1; j <= i; j++) a = a * (-1);
        for(int j = 1; j <= 2*i; j++) b = b * (x*pi);
        cos += (a)*((b)/fatorial(2*i));
        i++;
    }
    printf("%.5lf\n", cos);
    return 0;
}