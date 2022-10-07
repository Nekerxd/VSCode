// (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:  
// A) m�dia do sal�rio da popula��o; B) m�dia do n�mero de filhos; C) maior sal�rio; D) percentual de pessoas com sal�rio at� R$100,00.
// O final da leitura de dados se dar� com a entrada de um sal�rio negativo.  

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int sal100, pessoas, filho, totFilho;
    float totSalario, maiorSalario, salario;

    sal100 = pessoas = totFilho = maiorSalario = totSalario = 0;

    while (salario > -1){

        printf("");
        scanf("%f", &salario);

        printf("");
        scanf("%d", &filho);
        
        if (salario > -1){
            if (salario < 101)
                sal100++;
            
            totSalario += salario;
            totFilho += filho;
            pessoas++;
        }
    }
    
    printf("Porcentual de pessoas com sal�rio at� R$100,00 : %.0f", ((sal100 * 100) / pessoas));
}