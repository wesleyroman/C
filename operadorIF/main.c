#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Digite um caracter em letra minuscula: ");
    scanf("%c", &c);

    if( c >= 'a')
    {
        printf("\nSegue a letra que voce digitou em maiuscula: > %c <\n",
                    toupper(c));
    }

    return 0;
}
