#include <stdio.h>

int main (){
    int num;
    
    printf("Digite um numero e o programa lhe dira se ele eh impar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero eh par!!!");
    }
    else 
    printf("O numero eh impar!!!");
}