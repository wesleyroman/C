#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10 + 10 - 50;
    /*
        Associa��o da esquerda para direita
        1- ()
        2- *, /, %
        3- +, -
        4- <, <=, >,>=
        5- ==, !=

        Associa��o da direita para esquerda
        1- --, ++
        2- =, +=, -+, *=, /=, %=
    */
    int a, b, c;

    a = (b = (c = 1));
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);


    return 0;
}
