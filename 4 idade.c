#include <stdio.h>

int main(){
    int num;

    printf("Digite sua idade: ");
    scanf("%d", &num);

    if(num>=18){
        printf("Voce eh maior de idade!!");
    }
    else
    printf("Voce ainda nao eh maior de idade!!");
}