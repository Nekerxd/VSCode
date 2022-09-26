//Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferior a 500 reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento. 

#include <stdio.h>
#include <locale.h>

float reajuste(float salario);

int main(){
    setlocale(LC_ALL, "");
    float salario;
    printf("\nInsira o sal�rio atual: R$");
    scanf("%f", &salario);

    printf("\nSal�rio final: R$%.2f", reajuste(salario));
}

float reajuste(float salario){
    return salario < 500 ? salario + (salario * 0.3) : salario;
}