#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;

    unsigned short int u;
    printf("%i -> variavel i\n", sizeof(i));
    printf("%i -> variavel u\n", sizeof(u));

    /*

     1 - signed     -> + e -
     2 - unsigned   -> +
     3 - long       -> aumentar a capacidade de armazenamento da nossa variavel
     4 - short      -> no queremos diminui o tamanho de armazanamento

    */
    return 0;
}
