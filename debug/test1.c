#include <stdio.h>
#include <locale.h>

int vet[15], pares = 0, i;

funcvetor()
{
    for (i = 0; i < 15; i++)
    {
        vet[i] = i * 3;
        if (vet[i] % 2 == 0)
        {
            pares++;
        }
    }
    printf("\nVetor: ");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\nA quantidade de valores pares no vetor: %d", pares);
}
void main()
{
    setlocale(LC_ALL, "");

    funcvetor();
}