#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;


    while(x < 11){
        printf("msg\n");
        x += 1;
    }

    /*
        1) += -> soma
        2) -= -> subtracao
        3) *= -> multiplciacao
        4) /= -> divisao
        5) %= -> resto da divisao
    */

    int i = 50;
    printf("soma: %i\n", i+=100);
    printf("subtracao: %i\n", i-=50);
    printf("multiplicacao: %i\n", i*=3);
    printf("divisao: %i\n", i/=3);
    printf("resto: %i\n",i%=3);



    return 0;
}
