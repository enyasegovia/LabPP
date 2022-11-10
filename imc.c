/*
 Arquivo imc.c
 Data criacao: 10/nov/22
 Autor: Enya Segovia
 Calculando IMC
 */

#include <stdio.h> 

int main(int argc, char *argv[]){

    float altura = 0.0;
    float massa = 0.0;

    printf("Digite sua massa\n");
    scanf("%f", &massa);

    printf("Digite sua altura\n");
    scanf("%f", &altura);

    float imc = massa / (altura * altura);

    if (imc < 16){
    printf("%f (Perigo de vida)", imc);
    }

    if (imc >= 16 && imc < 17){
    printf("%f (Muito abaixo do peso)", imc);
    }

    if (imc >= 17 && imc < 18.5){
    printf("%f (Abaixo do peso)", imc);
    }

    if (imc >= 18.5 && imc < 25){
    printf("%f (Peso normal)", imc);
    }

    if (imc >= 25 && imc < 30){
    printf("%f (Acima do peso)", imc);
    }

    if (imc >= 30 && imc < 35){
    printf("%f (Obesidade grau I)", imc);
    }

    if (imc >= 35 && imc < 40){
    printf("%f (Obesidade grau II)", imc);
    }

    if (imc >= 40){
    printf("%f (Obesidade grau III)", imc);
    }

return 0;
}