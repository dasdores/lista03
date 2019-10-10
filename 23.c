#include <stdio.h>
#include <string.h>
int main (){
char frase[100];
int i, palavra=0, letra=0, zero=0;

printf("Digite a frase\n");
fgets(frase, 100, stdin);

for(i=0;frase[i]!='\0';i++){
	if(frase[i]!=zero && frase[i]!=' '){
		letra++;
	}else{
        palavra++;
        }
    }
    printf("%d palavras, %d letras.\n", palavra+1, letra-1);
}