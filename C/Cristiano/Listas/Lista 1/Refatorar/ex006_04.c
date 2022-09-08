//Uma companhia de seguros tem tr�s categorias de seguros baseadas na idade e ocupa??o do segurado. Somente pessoas com pelo menos 18 anos e n�o mais de 70 anos podem adquirir ap�lices de seguros. Quanto ?s classes de ocupa??es foram definidos tr�s grupos de risco. A tabela a seguir fornece as categorias em fun??o da faixa de idade e do grupo de risco: 
//          b   m   a
// 18 a 24  7   8   9
// 25 a 40  4   5   6
// 41 a 70  1   2   3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade, cod;
    char categoria;

    printf("Insira a idade do segurado e o grupo de risco [B/M/A]: ");
    scanf("%d %c", &idade, &categoria);

    if (idade < 18 || idade > 70)
        printf("Essa pessoa n�o pode mais adquirir ap�lices de seguros.");
    else if (categoria == 'B' || categoria == 'b')
        cod = (idade < 25 ? cod = 7 : idade < 41 ? cod = 4 : cod = 1);
    else if (categoria == 'M' || categoria == 'm')
        cod = (idade < 25 ? cod = 8 : idade < 41 ? cod = 5 : cod = 2);
    else if (categoria == 'A' || categoria == 'a')
        cod = (idade < 25 ? cod = 9 : idade < 41 ? cod = 6 : cod = 3);
    printf("O c�digo do seguro � %d", cod);
}

//C�digo atualmente incompleto.