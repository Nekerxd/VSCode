#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int i, j, codigo = 1;
    float media, nota[3];

    printf("Digite o c�digo aluno: ");
    scanf("%d", &codigo);

    while (codigo != 0)
    {
        for (i = 1; i < 4; i++)
        {
            printf("Nota %d: ", i);
            scanf("%f", &nota[i]);
        }
        media = (nota[1] + nota[2] + nota[3]) / 3;
        printf("A m�dia do aluno � igual a: %.2f", media);
        printf("\nDigite o c�digo do pr�ximo aluno: ");
        scanf("%d", &codigo);
    }
}