#include <stdio.h>
#include <locale.h>

void main()
{
    int vetor[10], i, j;
    j = 0;
    setlocale(LC_ALL, "");

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o elemento da [%d]� posi��o: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] > 50)
        {
            j++;
            printf("\nN�mero maior que 50: %d encontrado na posi��o [%d]", vetor[i], i);
        }
    }
    if ( j == 0)
    {
    printf("\nN�o existem n�meros superiores a 50 no vetor");
    }
}