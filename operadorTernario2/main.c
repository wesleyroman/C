#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um caracter entre A ate G: \n");
    char caracter = 0;
    scanf("%c", &caracter);
    int codigo = 0;

    /*
    switch(caracter){

        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;
        default:
            codigo = -1;

    }
    */
    codigo =    (caracter=='A') ? 65 :
                (caracter=='B') ? 66 :
                (caracter=='C') ? 67 :
                (caracter=='D') ? 68 :
                (caracter=='E') ? 69 :
                (caracter=='F') ? 70 :
                (caracter=='G') ? 71 : -1;


    printf("O codigo ASCII da letra digitada eh: %i", codigo);

    return 0;
}
