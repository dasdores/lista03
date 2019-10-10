#include <stdio.h>

int main(){
    int num1=0, num2=1, num3=1, cont=0, dado;
    printf("Informe a quantidade de soma fibonnace: ");
    scanf("%d", &dado);

    printf("%d ", num1);

    while(cont<dado-1){
        num1=num2;
        num2=num3;
        num3=num1+num2;
        cont++;
        printf("%d ", num1);
    }
    printf("\n");
}