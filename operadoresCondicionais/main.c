#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadeJovem, idadeIdosa;
    idadeJovem = 17;
    idadeIdosa = 60;

    int idade = 0;

    printf("Digite a idade de uma pessoa: \n");
    scanf("%i", &idade);

    if(idade <= idadeJovem)
    {
        printf("\nA idade informada e de um Jovem: \n");
    }else{
        if(idade >= idadeIdosa){
            printf("\n A idade informada e de uma pessoa idosa.\n");
        }else{
            if((idade > idadeJovem)&&(idade <idadeIdosa)){
                printf("A idade informada e de uma pessoa de meia idade.\n");

            }
        }
    }
    return 0;
}
