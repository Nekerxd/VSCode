#include <stdio.h>
#include <locale.h>

void main()
{
    int j=0, i=0, loc_mat, loc_port;
    setlocale(LC_ALL, "");

    struct dados
    {
    char aluno[50];
    float mat, port, media;
    } func[3];

        for (i = 0; i < 3; i++)
        {
            printf("\nDigite o nome do aluno: ");
            setbuf(stdin, NULL);
            gets(func[i].aluno);
            printf("Digite a nota de matem�tica: ");
            scanf("%f", &func[i].mat);
            printf("Digite a nota de portugu�s: ");
            scanf("%f", &func[i].port);
            func[i].media = (func[i].mat / func[i].mat);
        }

    printf("\nExibindo nomes e m�dia: \n");

        for (i = 0; i < 3; i++)
        {
            printf("\nAluno %d \nNome: %s \nM�dia:\n %.1f", i+1, func[i].aluno, func[i].mat, func[i].port);
        }
}