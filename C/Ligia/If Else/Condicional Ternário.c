#include <stdio.h>
#include <locale.h>

void main(){

    float sal, resultado;
    setlocale(LC_ALL,"");

    printf("Insira o seu sal�rio: ");
    scanf("%f", &sal);
    resultado = sal >= 1000 ? sal + (sal *0.1) : sal + (sal * 0.05);
    printf("O seu novo sal�rio ser�: %.2f \n", resultado);
}
