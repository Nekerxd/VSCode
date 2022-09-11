// (WHILE) Faça um algoritmo que determine e escreva:  
// - a maior idade dos habitantes
// - a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
// O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade = 0, maiorid = 0, contador = 0;
    char sexo;

    while (idade >-1)
    {
        printf("\nIdade: ");
        scanf("%d", &idade);

        printf("\nSexo [M/F]: ");
        scanf(" %c", &sexo);

        maiorid = (idade > maiorid ? idade : maiorid);
        if ((sexo == 'f' || sexo == 'F') && (idade > 17 && idade < 36))
            contador++;
    }
    printf("\nA pessoa mais velha dentre os habitantes tem %d anos.", maiorid);
    printf("\nExistem %d mulheres com idade entre 18 e 35 anos.", contador);
}