#include <stdio.h>
#include <locale.h>

void main(){


    int num, chec;
    setlocale(LC_ALL,"");

    printf("Insira um n�mero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O n�mero � par!");
        } else {
        printf("O n�mero � �mpar!");
        }
}
