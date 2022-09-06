#include <stdio.h>
#include <locale.h>

void main()
{
    int vet[5], vet2[5];
    setlocale(LC_ALL, "");

    printf("\nSem par�metro e sem retorno.\n");
    somavetSS();
    printf("\nSem par�metro e com retorno.\n");
    printf("%d",somavetSC());
    printf("\nCom par�metro e sem retorno.\n");
    somavetCS(vet);
    printf("\nCom par�metro e com retorno.\n");
    printf("%d",somavetCC(vet2));
}
//Sem par�metro e sem retorno.
void somavetSS()
{
    int s = 0, i, vet[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &vet[i]);
        s = s + vet[i];
    }
    printf("\nA soma dos vetores � = %d \n",s);
}
//Sem par�metro e com retorno.
int somavetSC()
{
    int s = 0, i, vet[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &vet[i]);
        s = s + vet[i];
    }
    return s;
}
//Com par�metro e sem retorno.
int somavetCS(int x[])
{
    int s = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &x[i]);
        s = s + x[i];
    }
    printf("\nA soma dos valores do vetor � = %d", s);
}
//Com par�metro e com retorno.
int somavetCC(int x[])
{
    int s = 0, i;
    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o vetor[%d]: ",i);
        scanf("%d", &x[i]);
        s = s + x[i];
    }
    return s;
}
