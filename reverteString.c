#include <string.h>
#include <stdio.h>
#include <math.h>


void inverte_string(char* string){
    int i;
    int size = strlen(string);
    char temp;

    for(i = 0; i < size / 2; i++){
        temp = string[i];
        string[i] = string[size - i - 1];
        string[size - i - 1] = temp;
    }
}

void upper(char* string){
    int i;
    int size = strlen(string);

    for(i = 0; i < size; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 32;
        }
    }
}


int main(){
    char buffer[1024];   
    scanf("%1023[^\n]", buffer);
    
    inverte_string(buffer);
    upper(buffer);

    printf("%s", buffer);

    return 0;
}