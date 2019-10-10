#include <stdio.h>
#include <string.h>

int reverse(char *frase){
    int i;
    char copia[40];
    int tamanho = strlen(frase)-1;
    int j = tamanho - 1;
    for(i=0; i<=tamanho; i++){
            copia[i]=frase[j];
            j--;
    }
    for(i=0; i<=tamanho; i++){
        frase[i]=copia[i];
    }
    return 0;
}
int main(){
    char frase[40];

    printf("Função para inverter array de literal: \n");
    printf("Digite uma frase: ");
    fgets(frase, 40, stdin);

    puts(frase);
    reverse(frase);
    puts(frase);
}