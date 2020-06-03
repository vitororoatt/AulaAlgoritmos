//5) Em épocas atuais, os comerciantes estão oferecendo descontos para que possam continuar vendendo.
//Ler o preço de um produto e um percentual de desconto.
//Calcular e mostrar o valor do desconto e o preço final.

#include <stdio.h>

int main(){
    float produto, vfinal, desconto;
    printf("Bem vindo ao mercado de Goiabas\n");
    printf("Digite o preco do produto \n");
    scanf(" %f", &produto);

    printf("Digite o desconto em porcentagem: \n");
    scanf(" %f", &desconto);

    printf("O valor do produto eh: %.2f e o desconto eh: %.2f Porcento\n", produto, desconto);
    desconto = desconto/100;
    printf("O valor do desconto eh %.2f\n", desconto);

    desconto = produto*desconto;
    printf("O valor do desconto eh %.2f\n", desconto);

    produto = produto - desconto;
    printf("O valor final eh: %.2f\n", produto);






    return 0;
}
