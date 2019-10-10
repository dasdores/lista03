#include <stdio.h>

int main(){
    int n, i;
    printf("Imprimir a tabuada de um número: \n");
    printf("Digite um número: ");
    scanf("%d", &n);
        for(i=0; i<=10; i++){
            printf("%d * %d = %d.\n", n, i, i*n);
    }
}