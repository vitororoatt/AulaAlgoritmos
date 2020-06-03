//7) Ler um número inteiro e dizer se ele é múltiplo de 7.

#include <stdio.h>

int main(){
    int ninteiro;
    printf("Digite um numero inteiro divisivel por 7\n");
    scanf(" %d", &ninteiro);

    if (ninteiro%7 == 0){
        printf ("O numero eh multiplo de 7\n");
    }
    else{
        printf("o numero nao eh multiplo de 7\n");

    }


    return 0;
}
