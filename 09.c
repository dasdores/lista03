#include <stdio.h>

int main(){
    int n=0, i, cont=0;
    printf("Imprimir a media dos números pares entre 13 e 73\n");
        for(i=13; i<=73; i++){
            if(i%2==0){
                n = n+i;
		cont++;
        }
    }
    printf("%d / %d = %d\n", n, cont, n/cont);
}
