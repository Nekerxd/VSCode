// (WHILE) Escreva um algoritmo que calcule a m�dia dos n�meros digitados pelo usu�rio, se eles forem pares. Termine a leitura se o usu�rio digitar zero (0).

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2, media;
    num1 = num2 = media = 1;
    
    while (num1 != 0 && num2 != 0)
    {   
            printf("\nDigite dois n�meros inteiros: ");
            scanf("%d %d", &num1, &num2);

        if (num1 != 0 && num2 != 0){
            if (num1 % 2 == 0 && num2 % 2 == 0){
                media = ((num1 + num2) / 2);
                printf("\nA m�dia entre os valores %d e %d � %d", num1, num2, media);
            } else
                printf("\nAmbos valores devem ser pares.");
        }
    }
}
