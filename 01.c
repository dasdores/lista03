#include <stdio.h>

int main(){
    int soma, i;
 
    for(i=0; i<=100; i++){
        soma = soma + i;
    }
    printf("A somar dos números naturais até 100 é: %d.\n", soma);   
}
