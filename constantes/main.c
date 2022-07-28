#include <stdio.h>
#include <stdlib.h>

//# comando nome-da-constante valor
#define w 7

int main()
{
    const int constante = 12;

    printf("%i", w + constante);
    return 0;
}
