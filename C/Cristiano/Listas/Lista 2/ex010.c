// Escrever um algoritmo que l� 10 valores, um de cada vez, e conta quantos deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo, escrevendo estas informa��es.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, range = 0, outrange = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);

        if (num > 9 && num < 21) range++;
        else outrange++;

        if (range > 0)
            printf("\n%d n�meros est�o no intervalo [10,20]", range);
        printf("\n%d n�meros est�o fora do intervalo", outrange);
    }
}
