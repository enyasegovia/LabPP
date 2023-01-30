/*
 Arquivo txtFibonacc.c
 Autor: Enya Segovia
 */

#include <stdlib.h>
#include <stdio.h>


unsigned long long int calc_fibonacci(unsigned long long int* fibo_vector, int vector_size){
    int current_size = 1;
    if(vector_size < 1)
        return -1; // Entrada inválida
    
    fibo_vector[0] = 0;
    
    while(current_size < vector_size){
        // Gera os núemros de Fibonacci até o vetor chegar no tamanho desejado
        if(current_size == 1){ // Segundo caso base
            fibo_vector[1] = 1;
        }else{ // Iteração
            fibo_vector[current_size] = fibo_vector[current_size - 1] + fibo_vector[current_size - 2];
        }
        current_size++;
    }

    return fibo_vector[current_size - 1]; // Retorna o último valor calculado
}


void write_file(unsigned long long int* fibo_vector, int vector_size){
    int i;
    FILE* file;

    file = fopen("fibonnaci.txt", "w");
    if(file == NULL){
        printf("==== ERRO NA ABERTURA DO ARQUIVO! ====");
        exit(1);
    }
    // Caso o arquivo exista, apaga o conteúdo
    fprintf(file, "");
    fclose(file);


    file = fopen("fibonnaci.txt", "a");
    if(file == NULL){
        printf("==== ERRO NA ABERTURA DO ARQUIVO! ====");
        exit(1);
    }

    // Adiciona os valores na forma append
    for(i = 0; i < vector_size; i++){
        fprintf(file, "%llu", fibo_vector[i]);
        if(i < vector_size - 1){
            fprintf(file, "\n");
        }
    }

    fclose(file);
}


int main(){
    int qtd;
    unsigned long long int* fibonacci_numbers;
    unsigned long long int last_fibonacci;

    scanf("%d%*c", &qtd);
    
    fibonacci_numbers = (unsigned long long int*) malloc(qtd * sizeof(unsigned long long int));
    if(fibonacci_numbers == NULL){
        printf("==== ERRO NA ALOCACAO DE MEMORIA! ====");
        return 1;
    }

    last_fibonacci = calc_fibonacci(fibonacci_numbers, qtd);
    printf("%llu", last_fibonacci);
    write_file(fibonacci_numbers, qtd);

    free(fibonacci_numbers);
    return 0;   
}
