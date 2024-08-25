#include <stdio.h>

int main(){
    int num;
    int num2;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite um numero novamente: ");
    scanf("%d", &num2);

    if(num%num2 == 0 || num2%num ==0){
        printf("Os numeros sao multiplos entre si!!!");
    }
    else
    printf("Os numeros nao sao multiplos entre si!!!");

}