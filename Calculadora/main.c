#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, mult, div;

    printf("Calculadora 1.0\n");
    printf("Entre com os 2 numeros a serem calculados:");

    scanf("%i%i", &num1, &num2);

    soma             = num1 + num2;
    subtracao        = num1 - num2;
    mult             = num1 * num2;
    div              = num1 / num2;

    printf("A soma e: %i\n", soma);
    printf("A subtracao e: %i\n", subtracao);
    printf("A multiplicacao e: %i\n", mult);
    printf("A divisao e: %i\n", div);

    return 0;
}
