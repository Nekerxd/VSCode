#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale (LC_ALL,"");
    float numero;
    printf("Digite o n�mero: ");
    scanf("%f", &numero);
    printf("O n�mero que voc� digitou foi %.2f", numero);
    printf("\n");
    system("calc");
    system("pause");
}
