#include <stdio.h>

int main(){
    float num;
    float num2;
    float mult;

    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite um numero novamente: ");
    scanf("%f", &num2);
    mult = num*num2;
    printf("A multiplicacao dos numeros informados eh: %.2f", mult);
}