#include <stdio.h>

int main(){
    int num;
    int num2;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite um numero novamente: ");
    scanf("%d", &num2);

    if(num>num2){
        printf(" O numero %d eh maior que o numero %d !!!", num,num2);
    }
    else if (num2>num){
        printf(" O numero %d eh maior que o numero %d !!!", num2,num);
    }
    else
    printf("Os numeros sao iguais!!!");
}