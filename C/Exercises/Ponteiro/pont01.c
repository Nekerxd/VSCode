#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int a = 5, b = 12, r, *p1, *p2;
    
    p1 = &a;
    p2 = &b;
    r = *p1 + *p2;

    printf("Endere�o de a = %p \n", &a);
    printf("Endere�o de b = %p \n", &b);
    printf("Conte�do de p1 = %p \n", p1);
    printf("Conte�do de p2 = %p \n", p2);
    printf("Resultado = %d", r);
}