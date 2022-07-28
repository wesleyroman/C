#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break     -> simplesmente interrompe o nosso ciclo
    //continue  -> interrompe o nosso laço

    for(int x = 0; x <= 10; ++x){

        if(x == 2){ //qnd x ==2, interrompe o laco atual
            printf("-\n");
            continue;
        }

        if(x == 8){ //qnd x ==8, interrompe o looping
            printf("-\n");
            break;
        }
        printf("%i\n", x);
    }
    return 0;
}
