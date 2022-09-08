//Elabore um algoritmo que leia as vari�veis C e N, respectivamente c�digo e n�mero de horas trabalhadas de um oper�rio. E calcule o sal�rio sabendo-se que ele ganha R$ 10,00 por hora. Quando o n�mero de horas exceder a 50 calcule o excesso de pagamento armazenando-o na vari�vel E, caso contr�rio zerar tal vari�vel. A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o sal�rio total e o sal�rio excedente.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int C, N;
    float salario, E;

    printf("Insira o c�digo do oper�rio: ");
    scanf("%d", &C);
    printf("Insira o n�mero de horas trabalhadas: ");
    scanf("%d", &N);
    E = (N > 50 ? N - 50 : 0) * 20;
    salario = (N > 50 ? 50 * 10 + E : N * 10);
    printf("O funcion�rio de c�digo %d, receber� no total R$%.2f e o sal�rio excedente foi de R$%.2f", C, salario, E);
}