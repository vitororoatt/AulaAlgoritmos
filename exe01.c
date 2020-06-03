//1) Ler um número inteiro, mostrar seu sucesso e seu antecessor.

#include <stdio.h>

int main (){
    int inteiro;
    printf("Digite um valor\n ");
    scanf(" %d", &inteiro);

    inteiro --;
    printf("\no seu antecessor eh: %d\n", inteiro);
    inteiro ++,inteiro ++;
    printf("\no seu sucessor eh: %d\n", inteiro);


    return 0;
}
