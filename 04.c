#include <stdio.h>
#include <math.h>

int main(){
    int i, div, tmp;

    printf("Calcular os divisores de um nº qualquer.\n");
    printf("Insira um número: ");
    scanf("%d", &div);
    
    for(i=1; i<=div; i++){
        if(div % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

