// Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.

#include <stdio.h>
#include <locale.h>

float ajustesal(float sal);

int main(){
    setlocale(LC_ALL, "");
    float salario;

    printf("Informe o valor do salário: ");
    scanf("%f",&salario);
    
    printf("Salário final: %g\n", ajustesal(salario));
}

float ajustesal(float sal){
    return sal < 501 ? sal * 1.3 : sal;
}