#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int Confi, N, op1, op2, op3 = 1;
    float Alfa, CritVal, Media, EM, EP, DP, P, ICM[2], ICP[2];
    
    while (op3 != 2){

        printf("\n[1] Proporção");
        printf("\n[2] Média");
        printf("\nMédia ou Proporção: ");
        scanf("%d", &op1);

        printf("\nQual o grau de confiança? (Em porcentagem): ");
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
            printf("\nInsira o Desvio Padrão: ");
            scanf("%f", &DP);
            printf("\nInsira a Média: ");
            scanf("%f", &Media);
        }

        // N = (pow((CritVal * DP / EM), 2));
        // N = ((pow(CritVal, 2) * P * (1-P)) / pow(EP, 2));

        if (op1 == 1){
            EP = (CritVal * sqrt((P * (1-P)/N)));
            ICP[0] = P - EP; ICP[1] = P + EP;

            printf("\nErro Amostral da Proporção = %.2f", EP);
            printf("\nIntervalo de confiança = IC = (%.2f ; %.2f)", ICP[0], ICP[1]);
        } 
        
        else{
            EM = (CritVal * (DP / sqrt(N)));
            ICM[0] = Media - EM; ICM[1] = Media + EM;

            printf("\nErro Amostral da Média = %.2f", EM);
            printf("\nIntervalo de confiança = IC = (%.2f ; %.2f)", ICM[0], ICM[1]);
        }
        
        printf("\nDeseja calcular novamente?");
        printf("\n[1] Sim");
        printf("\n[2] Não");
        scanf("%d", &op3);
    }
}