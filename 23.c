#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50];
    int i, cerveja=0, total=0, letra=0;

    printf("Introduza a frase\n");
    fgets(frase, 50, stdin);

    for(i=0;frase[i]!='\0';i++) {
	    if(!cerveja && frase[i]!=' ') {
		    cerveja=1;
		    total++;
	    }else if(cerveja && frase[i]==' ')
		    cerveja=0;
        if(isalpha(frase[i])){
		letra++;
	    }
    }
    printf("Palavra: %d\nLetra: %d\n", total, letra);
}