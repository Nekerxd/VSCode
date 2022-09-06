//Escreva um programa para classificar um triângulo de lados de comprimentos dados em escaleno (os três lados de comprimentos diferentes), isósceles (dois lados de comprimentos iguais) ou equilátero (os três lados de comprimentos iguais). 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float a, b, c;
    
    printf("Lado A:");
    scanf("%f", &a);
    printf("Lado B:");
    scanf("%f", &b);
    printf("Lado C:");
    scanf("%f", &c);
    
    if (a == b && a == c)
        printf("Todos os lados são iguais, logo é um triângulo equilátero");
    else if (a != b && a != c & b != c)
        printf("Todos os lados são diferentes, logo é um triângulo escaleno.");
    else
        printf("O triângulo possui dois lados iguais, logo é um triânhulo isósceles");    
}
