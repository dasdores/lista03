#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int array[20], i, j, d, k;
    srand(time(0));
    printf("Gerar 20 números entre 1000 a 1999 que divididos por 11 dão um resto igual a 5.");
    for(k=0; k<20; k++){
    array[k]=0;
    }

    for(i=0; i<20; i++){
        d = 1000+(rand()%(1999-1000+1));
        if(d%11==5){
            array[i] = d;
        }else{
            i--;
        }
    }
    printf("\n");
    for(j=0; j<20; j++){
        printf("%d\n", array[j]);
    }
}