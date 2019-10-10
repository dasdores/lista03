#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intervalo(int a, int b){
    srand(time(0));
    if(a>b){
        int d = a; a = b; b = d;
    }
    int fim = a+1+(rand()%(b-a));
    return fim;
}
int main(){
    int a, b, gerar;
    printf("Gerar números aleatórios em um intervalo definido.\n");
    printf("Digite o intervalo a / b:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    gerar = intervalo(a, b);
    printf("%d\n", gerar);
}