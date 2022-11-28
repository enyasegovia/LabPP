
#include <stdio.h>


int main(){

    int maior;
    int menor;
    int n;

    printf("Digite dois numeros: ");
    scanf("%d %d", &menor, &maior);

    for(n=menor; n<=maior; n++){
        if(n%2>0) {
            printf("%d, ", n);
        }
    }




    return 0;
}