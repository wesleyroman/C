#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10; //o sinal '=' � identificado como atribui��o;

    printf("\n%i\n", i==1);
    printf("\n%i\n", !(i==1) );
    printf("Digite um numero != de 5: \n");
    scanf( "%i", &i );

    if(i==5)
    {
        printf("\n A express�o �: \n");
        printf("\tTRUE\n");
    }else{
        printf("\n A express�o �: \n");
        printf("FALSE\n");

    }

//! � um sinal de nega��o, igual a express�o NOT

    /*
    1- positivo -> 1
    2- negativo -> 0

    if(5!=5)//COMPARA��O
    {

    }else{

    }
   */

    // == compara��o positiva
    // != compara��o negativa
    return 0;
}
