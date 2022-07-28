#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    n1 = n2 = n3 = n4 = media = 0;

    printf("\t\t\t\tMedia Escolar 1.0\n\n");
    printf("Digite a sua primeira nota bimestral: \n");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota bimestral: \n");
    scanf("%f", &n2);
    printf("Digite a sua terceira nota bimestral: \n");
    scanf("%f", &n3);
    printf("Digite a sua quarta nota bimestral: \n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nA sua media escolar foi de: %f\n", media);

    if(media >= 7)
    {
        printf("\nVoce foi Aprovado!\n");
    }else{
        printf("\nVoce foi Reprovado!\n");
    }
    return 0;
}
