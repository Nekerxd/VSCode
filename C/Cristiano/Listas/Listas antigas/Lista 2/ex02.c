#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int num = 1, pares = 0, somapar = 0;
    float media;
    while (num != 0) {
        printf("\nDigite um n�mero (0 para encerrar): ");
        scanf("%d", &num);
        if (num % 2 == 0 && num != 0) {
            somapar = somapar + num;
            pares++;
        }
    media = somapar / pares;
    printf("\nA m�dia dos n�meros pares digitados � igual a: %.2f ", media);
    }
}