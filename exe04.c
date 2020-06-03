//4) Ler os catetos de um triângulo retângulo e exibir a sua hipotenusa. DICA: lembra de Pitágoras!

#include <stdio.h>
#include <math.h>

int main (){
    int catadj, catoposto;
    float hipotenusa;
    printf("Vamos calcular a hipotenusa de um triangulo retangulo\n");
    printf("Digite o cateto adjacente\n");
    scanf(" %d", &catadj);

    printf("Digite o cateto oposto\n");
    scanf(" %d", &catoposto);

    hipotenusa = (catadj*catadj)+(catoposto*catoposto);
    hipotenusa = sqrt(hipotenusa);
    printf("o valor da hipotenusa eh: %f\n", hipotenusa);




    return 0;
}
