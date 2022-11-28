/*
 Arquivo dist.c
 Data criacao: 24/nov/22
 Autor: Enya Segovia
 Calculando distância entre pontos
 */

#include <stdio.h> 
#include <math.h>

int main(void) {
    
    float xA, xB, yA, yB, distancia;

    printf("Digite as coordenadas do ponto A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas do ponto B: ");
    scanf("%f %f", &xB, &yB);

    distancia = sqrt(((xB - xA) * (xB - xA)) + ((yB - yA) * (yB - yA)));

    printf("%g", distancia);

    return 0;
}