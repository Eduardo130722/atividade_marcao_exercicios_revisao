#include <stdio.h>

int main(){
    int num;
    float dec;
    char letra;

   printf("Digite uma letra: ");
    letra = getchar();
   printf("Digite um numero inteiro: ");
    scanf("%d", &num);
   printf("Digite um numero decimal separado por '.' : ");
    scanf("%f", &dec);
   printf("\nO caracter digitado foi: %c", letra);
   printf("\nO numero inteiro digitado foi: %d", num);
   printf("\nO numero decimal digitado foi: %.2f", dec);
   
}