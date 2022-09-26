//Elabore um programa com as 4 fun��es a seguir, que informado o sal�rio pelo usu�rio, verifique:
//�Se o sal�rio for maior ou igual a 1000 aumente 10% � Sen�o sendo o sal�rio menor que 1000 aumente 5% 
//Fun��es:�Sem par�metro e sem retorno;�Sem par�metro e com retorno;�Com par�metro e sem retorno;�Com par�metro e com retorno.
#include <stdio.h>
#include <locale.h>
#include "functions.c"


int main()
{
    float sal, a, SC, CC;
    setlocale(LC_ALL, "");

    printf("\nSem par�metro e sem retorno.\n");
    aumentoSS();

    printf("\nCom par�metro e sem retorno.\n");
    printf("Digite o seu sal�rio: R$");
    scanf("%f", &a);
    aumentoCS(a);

    printf("\nSem par�metro e com retorno.\n");
    SC = aumentoSC();
    printf("O seu novo sal�rio ser� R$%.2f \n", SC);

    printf("\nCom par�metro e com retorno.\n");
    printf("Digite o seu sal�rio: R$");
    scanf("%f", &a);
    CC = aumentoCC(a);
    printf("O seu novo sal�rio ser� R$%.2f \n", CC);

} 