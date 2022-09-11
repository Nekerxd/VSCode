// (WHILE) Escreva um algoritmo que calcule a m�dia aritm�tica das 3 notas dos alunos de uma classe. O algoritmo dever� ler, al�m das notas, o c�digo do aluno e dever� ser encerrado quando o c�digo for igual a zero.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int cod = 1, count = 1; float media = 0, nota[3];
    while (cod != 0)
    {
        printf("\nInsira o c�digo do aluno: ");
        scanf("%d", &cod);
        if (cod != 0){
            for (int i = 0; i < 3; i++)
            {
                printf("Insira a %d� nota: ", count);
                scanf("%f", &nota[i]);
            }
            media = ((nota[0]+nota[1]+nota[2])/3.0);
            printf("\nA m�dia do aluno de c�digo %d, � %.1f", cod, media);
        } else if(cod == 0)
            printf("Programa encerrado!");
    }
}