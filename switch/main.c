#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    switch(expressa){
    case(expressao-constante):
        break;
    case(true):
        break;
    default:
        //nao ha necessidade de colocarmoms um break;

    }
    */

    printf("Digite um valor entre 0 e 9\n");
    int i;
    scanf("%i",&i);

    switch(i){
    case 0:
        printf("A opcao digitada foi 'zero' ");
        break;
    case 1:
        printf("A opc�o digitada foi 'um' ");
        break;
    case 2:
        printf("A opc�o digitada foi 'dois' ");
        break;
    case 3:
        printf("A opc�o digitada foi 'tres' ");
        break;
    case 4:
        printf("A opc�o digitada foi 'quatro' ");
        break;
    case 5:
        printf("A opc�o digitada foi 'cinco' ");
        break;
    case 6:
        printf("A opc�o digitada foi 'seis' ");
        break;
    case 7:
        printf("A opc�o digitada foi 'sete' ");
        break;
    case 8:
        printf("A opc�o digitada foi 'oito' ");
        break;
    case 9:
        printf("A opc�o digitada foi 'nove' ");
        break;

    default:
        printf("Opcao default.");
    }
    return 0;
}
