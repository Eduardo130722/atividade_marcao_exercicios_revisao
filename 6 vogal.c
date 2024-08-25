#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("A letra informada eh uma vogal!!!");
    }
    else
    printf("A letra informada eh uma consoante!!!");
}