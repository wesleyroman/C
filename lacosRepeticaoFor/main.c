#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    for(parte1; parte2; parte3){

        parte1 -> é aonde nos declaramos e inicializamos a varialvel
        parte2 -> é a condição
        parte3 -> é aonde nos incrementamos a nossa variavel
    }
    */

    for(int i = 1; i <= 10; ++i){
        printf("%i\n",i);
    }
    return 0;
}
