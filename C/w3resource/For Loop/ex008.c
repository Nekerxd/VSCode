// Write a program in C to display the n terms of odd natural number and their sum

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i, soma = 0;

    printf("Insira um n�mero: ");
    scanf("%d", &num);

    printf("\nO n�meros �mpares s�o: ");
    for (i = 1; i <= num*2; i++){
        if (i % 2 != 0){
            printf(" %d", i);
            soma += i;
        }
    }
    printf("\nA soma dos n�meros �mpares at� %d termos � igual a: %d", num, soma);
}