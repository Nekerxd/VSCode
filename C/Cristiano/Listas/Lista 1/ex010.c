//A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3 grupos de ind�strias que s�o altamente poluentes do meio ambiente. O �ndice de polui��o aceit�vel varia de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as ind�strias do 1o grupo s�o intimadas a suspenderem suas atividades, se o �ndice crescer para 0,4 as ind�strias do 1o e 2o grupo s�o intimadas a suspenderem suas atividades, se o �ndice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Fa�a um programa que leia o �ndice de polui��o medido e emita a notifica��o adequada aos diferentes grupos de empresas.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float pollution;
    
    printf("Insira o �ndice de polui��o: ");
    scanf("%f", &pollution);
    if (pollution < 0.26)
        printf("O �ndice de polui��o est� aceit�vel.");
    else if (pollution < 0.3)
        printf("O �ndice de polui��o requer aten��o.");
    else if (pollution >= 0.3 && pollution < 0.4)
        printf("As ind�strias do 1� grupo devem suspender as suas atividades.");
    else if(pollution >= 0.4 && pollution < 0.5)
        printf("As ind�strias do 1� e 2� grupo devem suspender as suas atividades.");
    else
        printf("Todos os grupos devem paralisar as suas atividades.");
}