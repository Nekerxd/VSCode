#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"");

    char nome[100];
    float n1, n2, n3, n4, md;

    printf("Digite o nome do aluno: ");
    gets(nome);
    printf("Digite a 1� nota: ");
    scanf("%f", &n1);
    printf("Digite a 2� nota: ");
    scanf("%f", &n2);
    printf("Digite a 3� nota: ");
    scanf("%f", &n3);
    printf("Digite a 4� nota: ");
    scanf("%f", &n4);
    md = (n1 + n2 + n3 + n4) / 4;
    printf("O aluno %s obteve a m�dia: %.2f \n", nome, md);
}
