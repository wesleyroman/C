#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("Digite o numero 1:\n");
    char c;
    c = getchar();

    if(c == '1'){
        printf("O caracter digitado esta correto.\n");
    }else{
        printf("O valor digitado e invalido.\n");
        printf("Voce digitou o caracter > %c <.\n", c);
    }
    return 0;
}
