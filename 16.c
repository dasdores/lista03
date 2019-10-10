#include <stdio.h>
#include <string.h>

int main(){
    int i, j, tamanho;
    char nome[100];
    char copia[100];

    puts("Digite uma frase: ");
    fgets(nome, 100, stdin);
    tamanho = strlen(nome)-1;

    for(i=tamanho; i>=0; i--){
        printf("%c", nome[i]);
    }
        printf("\n");
}