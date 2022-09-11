// (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:  
// a) m�dia do sal�rio da popula��o;
// b) m�dia do n�mero de filhos;
// c) maior sal�rio;
// d) percentual de pessoas com sal�rio at� R$100,00.
// O final da leitura de dados se dar� com a entrada de um sal�rio negativo. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int filho, totfilho, pessoas, minsal;
    float salario, mediasal, totalsal, maiorsal, percent;

    totfilho = pessoas = minsal = 0;
    salario = totalsal = maiorsal = 0;
    percent = ((minsal * 100) / pessoas);

    while (salario >-1)
    {
        printf("Quantidade de filhos: ");
        scanf("%d", &filho);

        printf("Sal�rio: ");
        scanf("%f", &salario);

        if (salario >-1){
            if (salario < 101)
                minsal++;
            totfilho += filho;
            totalsal += salario;
            maiorsal = (salario > maiorsal ? salario : maiorsal);
            pessoas++;
        }
    }
    printf("\nA m�dia de filhos � de %d", (totfilho / pessoas));
    printf("\nA m�dia salarial � de R$%.2f", (totalsal / pessoas));
    printf("\nO maior sal�rio � de R$%.2f", maiorsal);
    printf("\nO percentual de pessoas com sal�rio at� R$100,00 � de %.1f%%", percent);
}