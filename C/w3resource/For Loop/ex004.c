// Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int soma = 0, cont = 0, i, num;
    
    for (i = 1; i < 11; i++){
        printf("Insira o %d� n�mero: ", i);
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("\nA soma dos 10 n�mero � igual a: %d", soma);
    printf("\nA m�dia dos 10 n�mero � igual a: %.2f", (float)soma/cont);
}