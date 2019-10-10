#include <stdio.h>
#include <string.h>

int grafico(char *dado){
    int i, j, k;
    int tamanho = strlen(dado)-1;
    
    for(i=0; i<=tamanho; i++){
        if(dado[i]>=48 && dado[i]<=57){
            k = dado[i] - 48;
            for(j=0; j<k; j++){
                printf("*");
           }
            printf("\n");
        }
    }
    return 0;
}
int main(){
    char dado[40];
    printf("Desenhar um gráfico na vertical: \n");
    printf("insira os dados: ");

    fgets(dado, 40, stdin);
    grafico(dado);        
}