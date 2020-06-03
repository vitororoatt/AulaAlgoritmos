
#include <stdio.h>

int main () {
    int digit, inverso;
    printf ("digite um numero inteiro de 3 digitos: ");
    scanf ("%d", &digit);
    printf ("\nnumero invertido: ");

    inverso = digit % 10;
    printf ("%d", inverso);

    digit = digit / 10;
    inverso = digit % 10;
    printf ("%d", inverso);

    digit = digit / 10;
    printf ("%d", digit);
    printf ("\n");
    return 0;
}
