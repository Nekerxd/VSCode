// Escrever um algoritmo que l� 10 valores, um de cada vez, e conta quantos deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo, escrevendo estas informa��es.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, num, cont = 0;

    for (i = 0; i < 10; i++){
        printf("Insira um n�mero: ");
        scanf("%d", &num);
        
        if (num > 9 && num < 21)
        cont++;
    }

    printf("\n%d n�meros est�o no intervalo [10,20]", cont);
}