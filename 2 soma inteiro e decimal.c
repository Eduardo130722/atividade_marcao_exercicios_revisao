#include <stdio.h>

int main(){
    int num;
    float num2;
    float soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Digite um numero decimal separado por '.' : ");
    scanf("%f", &num2);
    soma = num+num2;
    printf("A soma dos dois numeros digitados eh: %.2f", soma);
}