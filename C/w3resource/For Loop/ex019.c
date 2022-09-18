// Write a program in C to display the n terms of harmonic series and their sum.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i;
    float soma = 0;

    printf("Insira um n�mero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        i < num ? printf("[1/%d] + ", i) : printf("[1/%d]", i);
        soma += 1/(float)i;
    }
    printf("\nA soma da s�rie harm�nica de %d termos � igual a: %f", num, soma);
}