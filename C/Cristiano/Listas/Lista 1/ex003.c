//Escreva um programa para classificar um tri�ngulo de lados de comprimentos dados em escaleno (os tr�s lados de comprimentos diferentes), is�sceles (dois lados de comprimentos iguais) ou equil�tero (os tr�s lados de comprimentos iguais). 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float a, b, c;
    
    printf("Valores para os lados A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == b && a == c)
        printf("Todos os lados s�o iguais, logo � um tri�ngulo equil�tero");
    else if (a != b && a != c & b != c)
        printf("Todos os lados s�o diferentes, logo � um tri�ngulo escaleno.");
    else
        printf("O tri�ngulo possui dois lados iguais, logo � um tri�nhulo is�sceles");    
}
