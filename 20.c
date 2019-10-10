#include <stdio.h>

int primo(int n){
  int fator=2;
  printf("%d =", n);

  while(n > 1){
      while(n % fator == 0){
          printf(" %d", fator);
          n = n / fator; 
          if(n > 1){
        printf(" x");
            }
        }
      fator++;   
    }
    return 0;
}
int main(){
  int num, fator=2;

  printf("Decomponho um numero dado em fatores primos.\n");
  printf("Informe um número: ");
  scanf("%d", &num);
  printf("Decomposicao de %d em fatores primos:\n", num);  

  int p = primo(num);
  printf("\n");
}