//6) Sabendo que uma hora tem 60 minutos, ler a hora atual (hora e minutos) e mostrar quanto minutos
// do dia se passaram até o momento. Por exemplo, se o usuário digitar horas = 8 e minutos = 10,
// a resposta é 490 minutos.

#include <stdio.h>

int main(){
    int hora, minutos;
    printf("Bem vindo ao decodificador de horas para minutos\n");
    printf("\nDigite a hora \n");
    scanf(" %d", &hora);

    printf("Digite os minutos: \n");
    scanf(" %d", &minutos);
    hora = hora *60;

    hora = hora+minutos;
    printf("A resposta eh %d minutos\n", hora);



    return 0;
}
