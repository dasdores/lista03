#include <stdio.h>

float conversor(float x){
    float t = (x-32)/1.8;
    return t;
}
int main(){
    float ce, fa;
    printf("Converter de Fahrenheit para Celsius\n");
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fa);

    ce = conversor(fa);
    printf("%1.1f° Celsius.\n", ce);
}