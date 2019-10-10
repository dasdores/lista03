#include <stdio.h>

int main(){
    int fat, n;
    printf("Insira um valor para calcular seu fatorial: ");
    scanf("%d", &n);
        for(fat = 1; n > 1; n = n - 1){
            fat = fat * n;
        }
    printf("\nFatorial: %d.\n", fat);
}