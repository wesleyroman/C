#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';

    do{
        num1 = num2 = resultado =0;
        printf("(1) Somar\n");
        printf("(2) Subtrair\n");
        printf("(3) Multiplicar\n");
        printf("(4) Dividir\n");
        printf("(0) Sair\n");

        printf("Informe a operacao: \n\t\t\t\t>");
        op = getche();

        if(op!='0'){
            printf("\nDigite o primeiro numero: \t\t>");
            scanf("%f", &num1);
            printf("Digite o segundo numero: \t\t>");
            scanf("%f", &num2);

            if(op=='1'){
                resultado = num1 + num2;
            }else{
                if(op=='2'){
                    resultado = num1 - num2;
                }else{
                    if(op=='3'){
                        resultado = num1 * num2;
                    }else{
                        if(op=='4'){
                            resultado = num1 / num2;
                        }
                    }
                }
            }
        }

        printf("\nO resultado e: \t\t\t%f \n", resultado);

       //system("pause");

        printf("Pressione uma tecla para calcular novamente:");
        getch();
        system("cls");

    }while(op != '0');


    return 0;
}
