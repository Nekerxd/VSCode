//Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e imprima seu cargo e o percentual de aumento ao qual este fncion�rio tem direito seguindo a tabela abaixo: 
//C�digo      Cargo   Percentual
//1        Escritur�rio   50%
//2        Secret�rio     35%
//3        Caixa          20%
//4        Gerente        10%
//5        Diretor        N�o tem aumento

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int cod;

    printf("Insira o c�digo correspondente ao cargo: ");
    scanf("%d", &cod);

    switch (cod)
    {
    case 1:
        printf("Os escritu�rios receber�o um aumento de 50%%");
        break;
    case 2:
        printf("Os secret�rios receber�o um aumento de 35%%");
        break;
    case 3:
        printf("Os caixas receber�o um aumento de 20%%");
        break;
    case 4:
        printf("Os gerentes receber�o um aumento de 10%%");
        break;
    case 5:
        printf("Os diretores n�o receber�o um aumento salarial");
        break;
    default:
        printf("C�digo inv�lido");
        break;
    }
}