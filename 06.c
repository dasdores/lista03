#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    printf("Imprimir o menor inteiro positivo x cujo quadrado é superior a um valor L dado.\n");
    printf("Informe um número: ");
    scanf("%d", &n);

    for(i=0; ;i++){
        if(i*i>n){
            printf("%d\n", i);
            exit(0);
        }
    }
}