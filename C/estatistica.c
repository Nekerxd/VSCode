#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int Confi, N, op1, op2, op3 = 1;
    float Alfa, CritVal, Media, EM, EP, DP, P, ICM[2], ICP[2];
    
    while (op3 != 2){

        printf("\n[1] Propor��o");
        printf("\n[2] M�dia");
        printf("\nM�dia ou Propor��o: ");
        scanf("%d", &op1);

        printf("\nQual o grau de confian�a? (Em porcentagem): ");
        scanf("%d", &Confi);

        CritVal = (Confi == 99 ? 2.575 : Confi == 95 ? 1.96 : 1.6450);
        Alfa = (Confi == 99 ? 0.01 : Confi == 95 ? 0.05 : 0.1);

        printf("\nInsira o tamanho da amostra: ");
        scanf("%d", &N);

        if (op1 == 1){
            printf("\nInsira o valor para o Sucesso:");
            scanf("%f", &P);
            if (P == 0)
                P = 0.5;
        }
        else if (op1 == 2){
            printf("\nInsira o Desvio Padr�o: ");
            scanf("%f", &DP);
            printf("\nInsira a M�dia: ");
            scanf("%f", &Media);
        }

        // N = (pow((CritVal * DP / EM), 2));
        // N = ((pow(CritVal, 2) * P * (1-P)) / pow(EP, 2));

        if (op1 == 1){
            EP = (CritVal * sqrt((P * (1-P)/N)));
            ICP[0] = P - EP; ICP[1] = P + EP;

            printf("\nErro Amostral da Propor��o = %.2f", EP);
            printf("\nIntervalo de confian�a = IC = (%.2f ; %.2f)", ICP[0], ICP[1]);
        } 
        
        else{
            EM = (CritVal * (DP / sqrt(N)));
            ICM[0] = Media - EM; ICM[1] = Media + EM;

            printf("\nErro Amostral da M�dia = %.2f", EM);
            printf("\nIntervalo de confian�a = IC = (%.2f ; %.2f)", ICM[0], ICM[1]);
        }
        
        printf("\nDeseja calcular novamente?");
        printf("\n[1] Sim");
        printf("\n[2] N�o");
        scanf("%d", &op3);
    }
}