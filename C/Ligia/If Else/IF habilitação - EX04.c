#include <stdio.h>
#include <locale.h>

void main(){

    int idade, cnh;
    setlocale(LC_ALL, "");

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Possui habilita��o? \n 0 - n�o possui \n 1 - possui \n Informe a sua situa��o (0 ou 1): ");
    scanf("%d", &cnh);
    idade >= 18 && cnh == 1 ? printf("Voc� pode dirigir o ve�culo") : printf("Voc� n�o pode dirigir o ve�culo");
}
