#include <stdio.h>
#include <math.h>

float conversor(float x){
   float t = (9*x+160)/5;
   return t;
}
int main(){
    float fa, ce;
    printf("Converter de Celsius para Fahrenheit\n");
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &ce);

    fa = conversor(ce);
    printf("%1.1f° fahrenheit.\n", fa);
}