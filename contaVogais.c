/*
Peça ao usuário para digitar uma palavra. Seu programa precisa contar as vogais e
apresentá-las ao usuário. Para este exercício, ignore outras letras que podem ou não ser
consideradas vogais, ou seja, considere apenas “A, E, I, O e U” (tanto minúsculas quanto
maiúsculas) como vogais.
*/

#include <string.h>
#include <stdio.h>


int contar_vogais(char* texto){
    int n = strlen(texto);
    int i;
    int total = 0;

    for(i = 0; i < n; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || 
           texto[i] == 'i' || texto[i] == 'o' ||
           texto[i] == 'u' || texto[i] == 'A' ||
           texto[i] == 'E' || texto[i] == 'I' ||
           texto[i] == 'O' || texto[i] == 'U'){
            total += 1;
        }
    }

    return total;
}


int main(){
    int n;
    char texto[1024];
    scanf("%1023[^\n]%*c", texto);
    
    printf("%d", contar_vogais(texto));

    return 0;
}