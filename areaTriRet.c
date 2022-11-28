/*
 Arquivo areaTriRet.c
 Data criacao: 24/nov/22
 Autor: Enya Segovia
 */


#include <stdio.h>

float fabs(float numero){
    if (numero >= 0){
        return numero;
    }
    else {
        return -numero;
    }
}

int main(){
    
    float xA, xB, yA, yB;
    float base, altura, area;


    printf("Digite  as coordenadas (x, y) para A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite  as coordenadas (x, y) para B: ");
    scanf("%f %f", &xB, &yB);
   
   
    printf("Ponto C = (%g, %g)\n", xB, yA);


    base = fabs(xB - xA);
    altura = fabs(yA - yB);
    area = (base * altura)/2;

    printf("%g", area);

    return 0;
}