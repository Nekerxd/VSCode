//Efetuar a leitura de tr�s valores (vari�veis A, B e C) e apresentar os valores em ordem crescente.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a, b, c, temp;
    
    printf("Insira os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);
    // 11 3 7 -> temp = 7  7 3 11 -> temp = 3  3 7 11 -> 3 7 11 -x

    if (a > c) {
        temp = c;
        c = a;
        a = temp;
    } if (a > b) {
        temp = b;
        b = a;
        a = temp;
    } if (b > c) {
        temp = c;
        c = b;
        b = temp;
    }
    printf("Os valores na ordem crescente: %d, %d e %d", a, b, c);
}
