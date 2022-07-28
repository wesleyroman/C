#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10; //o sinal '=' é identificado como atribuição;

    printf("\n%i\n", i==1);
    printf("\n%i\n", !(i==1) );
    printf("Digite um numero != de 5: \n");
    scanf( "%i", &i );

    if(i==5)
    {
        printf("\n A expressão é: \n");
        printf("\tTRUE\n");
    }else{
        printf("\n A expressão é: \n");
        printf("FALSE\n");

    }

//! é um sinal de negação, igual a expressão NOT

    /*
    1- positivo -> 1
    2- negativo -> 0

    if(5!=5)//COMPARAÇÃO
    {

    }else{

    }
   */

    // == comparação positiva
    // != comparação negativa
    return 0;
}
