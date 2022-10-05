//  Escrever um algoritmo que calcule e mostre a m�dia aritm�tica dos n�meros lidos entre 13 e 73.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, limite, i, soma = 0, x = 0;

    printf("Quantos n�meros deseja inserir: ");
    scanf("%d", &limite);

    for (i = 0; i < limite; i++){
        printf("Insira o %d� n�mero: ", i+1);
        scanf("%d", &num);

        if (num < 13 && num > 73){
            soma += num;
            x++;
        }
    }

    printf("A m�dia aritm�tica dos %d n�meros lidos entre 13 e 73 �: %d", x, (float)soma / x);
}