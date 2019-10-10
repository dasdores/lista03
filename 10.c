#include <stdio.h>

int main(){
    int num[10], dentro[10], fora[10], i, dig, qd=0, qf=0, j=0, k=0;

    for(i=0; i<10; i++){
        dentro[i] = 0;
        fora[i] = 0;
    }

    printf("Informe 10 números: \n");
    for(i=0; i<10; i++){
        printf("Número %d: \n",i+1);
        scanf("%d", &dig);
        num[i] = dig;
    }
    for(i=0; i<10; i++){
        if(num[i]>=10 && num[i] <= 50){
            dentro[j] = num[i];
            qd++;
            j++;
        }else{
            fora[k] = num[i];
            qf++;
            k++;
        }
    }
        printf("Dentro do intervalo: %d números.\n[", qd);
    for(i=0; i<qd; i++){
        printf(" %d ", dentro[i]);
    }
    printf("]\n");
        printf("Fora do intervalo: %d números.\n[", qf);
    for(i=0; i<qf; i++){
        printf(" %d ", fora[i]);
    }
    printf("]\n");
}