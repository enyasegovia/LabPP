/*
Peça ao usuário para escrever uma mensagem de uma linha (uma palavra,
uma frase, algum texto). Conte o número de palavras dentro dessa mensagem.
Como critério para o que deve ser considerado uma palavra para este
exercício, considere uma palavra definida por uma coleção de letras
adjacentes, dígitos (alfanuméricos) e/ou hífen (‘-’) cercado por outros
caracteres, como espaços e sinais de pontuação. Você deve pensar em uma
função para determinar se algum caractere faz parte de uma palavra ou não.
Assuma que nenhum diacrítico será utilizado pelo usuário e reserve 1kB
(1024) de memória para a entrada do usuário. A ideia aqui é semelhante
ao processo de “tokenização” no processamento de linguagem natural, mas,
em vez de separar as palavras, você só precisa contá-las (por exemplo,
usando uma máquina de estado simples).
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