//Uma companhia de seguros tem tr�s categorias de seguros baseadas na idade e ocupa��o do segurado. Somente pessoas com pelo menos 18 anos e n�o mais de 70 anos podem adquirir ap�lices de seguros. Quanto �s classes de ocupa��es foram definidos tr�s grupos de risco. A tabela a seguir fornece as categorias em fun��o da faixa de idade e do grupo de risco: 
//          b   m   a
// 18 a 24  7   8   9
// 25 a 40  4   5   6
// 41 a 70  1   2   3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    unsigned short int idade;
    char categoria;

    printf("Insira a idade do segurado: ");
    scanf("%d", &idade);
    printf("Insira o grupo de risco [B/M/A]: ");
    scanf(" %c", &categoria);

    if (idade < 18 || idade > 70)
        printf("Essa pessoa n�o pode mais adquirir ap�lices de seguros.");
    else if (categoria == 'B' || categoria == 'b'){
        if (idade > 17 && idade < 25)
            printf("O c�digo do seguro � 7");
        else if (idade > 24 && idade < 41)
            printf("O c�digo do seguro � 4");
        else if (idade > 40 && idade < 71)
            printf("O c�digo do seguro � 1");
    }
    else if (categoria == 'M' || categoria == 'm'){
        if (idade > 17 && idade < 25)
            printf("O c�digo do seguro � 8");
        else if (idade > 24 && idade < 41)
            printf("O c�digo do seguro � 5");
        else if (idade > 40 && idade < 71)
            printf("O c�digo do seguro � 2");
    }
    else if (categoria == 'A' || categoria == 'a'){
        if (idade > 17 && idade < 25)
            printf("O c�digo do seguro � 9");
        else if (idade > 24 && idade < 41)
            printf("O c�digo do seguro � 6");
        else if (idade > 40 && idade < 71)
            printf("O c�digo do seguro � 3");
    }
}