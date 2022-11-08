#include <stdio.h>
#include <locale.h>
#define N 7

int InsertInit(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);
int InsertFim(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);

int main(){
    setlocale(LC_ALL, "");
    int LL[N], IL, FL, IA, FA, i, infoNodo, op;

    op = 0;
    IA = 0;
    FA =  N-1;
    IL = -1;
    FL = 0;

    while (op != 3)
    {
        printf("Escolha uma opção:\n[1]Inserir Início\n[2]Inserir Final\n[3]Sair\n\n");
        scanf("%d", &op);
        if (op != 3){
            printf("Insira o valor: ");
            scanf("%d", &infoNodo);
        }
        
        switch (op){

        case 1:
            InsertInit(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 2:
            InsertFim(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 3:
            break;
        }

        for (i = 0; i < N; i++)
        {
            printf("[%d]\t", LL[i]);
        }
    }
    
}

int InsertInit(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
    int i;

    if ((IA == *IL) && (FA == *FL))
        return 1; //deu erro - lista cheia!!    
    else{
            if (*IL == -1) //Se LL vazio
                *IL = *FL = IA;
            else if (*IL > IA) //Se tiver espa?o
                *IL -= 1; // no início da lista
            else{
                for (i = *FL; i >= *IL; i--){
                    LL[i+1] = LL[i];
                *FL += 1;
                }
            }
        }
        LL[*IL] = infoNodo;
        return 0;
}

int InsertFim(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
    int i;

    if ((IA = *IL) && (FA = *FL)) 
        return 1;
    else{
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*FL < FA)
            *FL += 1;
        else{
            for (i = *IL; i <= *FL; i++){
                LL[i-1] = LL[i];
            *IL -= 1;
            }
            }
        } 
        LL[*FL] = infoNodo;
        return 0;
}
 
// int InsertMeioOtimizado(){
// in?cio
//     se (IA = IL e FA = FL) ou (K > FL - IL + 2) ou (K <= 0) ou (K > FA) ent?o
//         Sucesso <- falso
//     sen?o 
//     in?cio
//         se IL = 0 ent?o
//             IL <- FL <- (FA+1) div 2
//         sen?o se IL = IA ou ((FL < FA) e (K > (FL - IL + 2 / 2))) ent?o
//         in?cio
//             para Ind de FL incr -1 at? IL + K - 1 fa?a
//                 LL[Ind + 1] <- LL[Ind]
//             FL <- FL + 1
//         fim
//         sen?o in?cio
//             para Ind de IL incr 1 at? IL + K - 1 fa?a
//                 LL[Ind - 1] <- LL[Ind]
//             IL <- IL - 1
//             K <- K + 1
//         fim
//         LL[IL + K - 1] <- infoNodo
//         Sucesso <- verdadeiro
//     fim
// fim
// }


// int RemoveNodo(){
// in?cio
//     se (K <= 0) ou (K > FL - IL + 1) ent?o
//         Sucesso <- falso
//     sen?o
//     in?cio
//         para i de IL + K - 1 incr 1 at? FL fa?a
//             LL[i] <- LL[i+1]
//         FL <- FL - 1
//         se FL = IL - 1 ent?o
//             IL <- FL <- 0
//         Sucesso <- verdadeiro
//     fim
// fim
// }