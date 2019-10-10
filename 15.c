#include <stdio.h>
#include <string.h>

int main(){
    int i, j, tamanho, quant=0;
    char nome[100], ch='a';

    printf("Digite uma frase: ");
    fgets(nome, 100, stdin);
    //printf("Insira o caractere a contar: ");
    //scanf("%c", &ch);
    tamanho = strlen(nome)-1;
    for(i=0; i<=tamanho; i++){
        if(nome[i]==ch){
            quant++;
        }
    }
    printf("%c -> %d ocorrências.\n", ch, quant);
}