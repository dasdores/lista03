#include <stdio.h>
#include <string.h>

int main(){
	int i, k, j, cont=0; 
	char frase[40], cop[40], ver[40];

	printf("Digite uma frase: ");
	fgets(frase, 40, stdin);
	int tamanho = strlen(frase)-1;

//--------tirar espaços/minusculo---------------
	for(i=0; i<tamanho; i++){
		if(frase[i]>=65 && frase[i]<=90){
			cop[j] = frase[i]+32;
			j++;
		}else if(frase[i]>=97 && frase[i]<=122){
			cop[j] = frase[i];
			j++;
		}
	}	
//----------------------------------------------
	
	for(i=97; i<=122; i++){
		for(j=0; j<strlen(cop); j++){
			if(i==cop[j]){
				cont++;
				ver[0]=i;
			}
		}
		if(cont!=0){
			printf("%c  ->  %d.\n", ver[0], cont);
			cont=0;
		}
	}
}