//Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferior a 500 reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float salario, new_salario;
    printf("Insira o sal�rio atual: R$");
    scanf("%f", &salario);
    if(salario < 500){
        new_salario = salario + (salario * 0.3);
        printf("Ap�s o reajuste, o sal�rio passar� a ser R$%.2f", new_salario);
    }
    else
        printf("O funcion�rio n�o tem direito ao aumento.");
}
