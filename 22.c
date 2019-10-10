#include <stdio.h>
#include <string.h>

int imprime_vertical(int elemento[], int total)
{
    int i;
    int max = elemento[0];
    for (i = 1; i < total; ++i)
    {
        if (elemento[i] > max) max = elemento[i];
    }    // end for: max e o maior valor
    for (int y = max; y >= 1; --y)
    {    // imprime as linhas de max ate 1, 'total'colunas
        for (int x = 0; x < total; ++x)
        {
            if (elemento[x] >= y)
                printf("*");
            else 
                printf(" ");
        }    // end for
        printf("\n");    // fim da linha y
    }    // end for
    return 0;
}   
int main(){
    int i, j=0; 
	char frase[100];
    int cop[100];
for(i=0; i<100; i++){
        cop[i] = 0;
        frase[i] = 0;
    }

	printf("Digite: ");
	fgets(frase, 40, stdin);
	int tamanho = strlen(frase);

    

	for(i=0; i<tamanho; i++){
		if(frase[i]>=48 && frase[i]<=57){
			cop[j] = frase[i]-48;
			j++;
		}
	}	
    tamanho = strlen(frase);
    imprime_vertical(cop, tamanho);
    return 0;
}