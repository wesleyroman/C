#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x               = 0;
    int valDigitado     = 0;

    printf("Informe a qt de vezes que deseja repetir a instrução: ");
    scanf("%i\n", &valDigitado);

    while(x < valDigitado){
        printf("%i\n", x * 10);
        x = x + 1;
    }


    return 0;
}
