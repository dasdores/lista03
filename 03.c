#include <stdio.h>

int main(){
    int i=1;

    printf("Calcular e imprimir os números divisíveis por 4 menores que 100.\n");
    
    while(i<100){
        if(i%4==0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}
