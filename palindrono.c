/*
Palíndromo, do grego palin (novo) e dromo (percurso), é toda palavra
ou frase que pode ser lida de trás pra frente e que, independente da
direção, mantém o seu sentido. Peça ao usuário para escrever uma mensagem
de uma linha (uma palavra, uma frase, algum texto). Verifique se a
mensagem é um palíndrono.
*/

#include <string.h>
#include <stdio.h>

void tratar_texto(char* texto){
    int i;
    int j;
    int n = strlen(texto);
    char texto_temp[1024];
    strcpy(texto_temp, texto);

    for(i = j = 0; i < n; i++){
        if(texto_temp[i] >= 'a' && texto_temp[i] <= 'z'){
            texto[j] = texto_temp[i] - 32;
            j++;
        }
        if(texto_temp[i] >= 'A' && texto_temp[i] <= 'Z'){
            texto[j] = texto_temp[i];
            j++;
        }
    }

    texto[j] = '\0';
}


int e_palindrono(char* texto){
    int n = strlen(texto);
    int i;

    for(i = 0; i < n / 2; i ++){
        if(texto[i] != texto[n - 1 - i]){
            return 0;
        }
    }

    return 1;
}


int main(){
    char texto[1024];
    scanf("%1023[^\n]%*c", texto);
    tratar_texto(texto);

    if(e_palindrono(texto)){
        printf("Palindrono: Verdadeiro");
    }else{
        printf("Palindrono: Falso");
    }
    return 0;
}