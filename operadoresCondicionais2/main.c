#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&& (true)&&(true)

    int i = 40;
    int condicao = (i>20)&&(i<100);
    printf("%i\n",condicao);
    printf("%i\n",!condicao);

    //|| (true)||(false)    -> 1
    //|| (true)||(false)    -> 1
    //|| (true)||(true)     -> 1
    //|| (false)||(false)   -> 0

    system("cls");

    int x       = 10;
    int cond    = 0;

    cond = (x==10)||(x<1);
    printf("%i", cond);

    cond = (x==0)||(x!=1);
    printf("%i", cond);

    cond = (x==10)||(x!=0);
    printf("%i", cond);

    cond = (x!=10)||(x==0);
    printf("%i", cond);


    return 0;
}
