#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int numero = 10, *ponteiro;
    
    ponteiro = &numero;
    printf("O conte�do do ponteiro = %d\n", *ponteiro);
}