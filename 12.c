#include <stdio.h>
#include <math.h>

int primo(int x){
    int tmp = 0, i;
    for(i=1; i<=x; i++){
        if(x % i == 0){
            tmp = tmp + 1;
        }
    }
    if(tmp <= 2){
        return (x);
    }else{
        return 0;
    }
}
int main(){
    int array[12], i, j=0, k;

    printf("Somar o 6º e 12º número primo:\n");

        for(i=2; j<12; i++){
            k = primo(i);
            if(k!=0){
                array[j] = k;
                j++;
        }
    }
    int diferenca = array[11] - array[5];
    printf("A diferença é %d.\n", diferenca);
}

