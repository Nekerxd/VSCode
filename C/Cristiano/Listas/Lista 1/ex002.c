//Escreva um programa que realize arredondamentos de n�meros utilizando a regra usual da matem�tica: se a parte fracion�ria for maior do que ou igual a 0,5, o n�mero � arredondado para o inteiro imediatamente superior, caso contr�rio, � arredondado para o inteiro imediatamente inferior.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float valor;
    printf("Escreva o valor a ser arredondado: ");
    scanf("%f", &valor);
    printf("%.0f", valor);
}
