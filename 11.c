#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, num, tmp=0;

    printf("Informe um nº qualquer.\n");
    scanf("%d", &num);
    
    if(num==0 || num==1){
        printf("Não é primo!\n");
        exit(0);
    }
    for(i=1; i<=num; i++){
        if(num % i == 0){
            tmp = tmp + 1;
        }
    }
    if(tmp <= 2){
        printf("É primo!\n");
    }else{
        printf("Não é primo!\n");
    }
}

