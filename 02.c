#include <stdio.h>

int main(){
    int i=1;

    printf("Imprimir os múltiplos de 7 menores que 200.\n");
    
    while(7*i<200){
        printf("%d ", 7*i);
        i++;
    }
    printf("\n");
}