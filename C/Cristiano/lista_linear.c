#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#define N 10

void iniciaLista(int *IL, int *FL, int IA);
int insertInicio(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);
int insertMeio(int LL[], int *FL, int *IL, int IA, int FA, int K, int infoNodo);
int insertFim(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);
int removerNodo(int LL[], int *FL, int *IL, int IA, int FA, int K, int infoNodo);
void exibirLista(int LL[], int IL, int FL);
void buscarLista(int LL[], int *FL, int *IL, int valBuscar);

int main(){
    setlocale(LC_ALL, "");
    int IA, FA, IL, FL, op, K, infoNodo, valBuscar, LL[N];

    IA = 0;
    FA = N - 1;
    op = 1;

    iniciaLista(&IL, &FL, IA);

    while (op > 0 && op < 8){
        printf("\n\n====== Lista Linear Sequencial ======\n\n"
        "Escolha uma das seguintes op��es: \n"
        "[1] Limpar lista\n"
        "[2] Inserir no in�cio\n"
        "[3] Inserir em uma posi��o\n"
        "[4] Inserir ao fim\n"
        "[5] Exibir lista\n"
        "[6] Remover nodo\n"
        "[7] Encontrar na lista\n"
        "[8] Encerrar lista\n:");
        scanf("%d", &op);

        switch (op){
        case 1:
            iniciaLista(&IL, &FL, IA);
            break;
        case 2:
            printf("\nInsira o valor: ");
            scanf("%d", &infoNodo);
            insertInit(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 3:
            printf("\nPosi��o da lista para inser��o: ");
            scanf("%d", &K);
            printf("\nInsira o valor: ");
            scanf("%d", &infoNodo);
            insertMeio(LL, &FL, &IL, IA, FA, K, infoNodo);
            break;
        case 4:
            printf("\nInsira o valor: ");
            scanf("%d", &infoNodo);
            insertFim(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 5:
            printf("A sua lista atualmente �: \n");
            exibirLista(LL, IL, FL);
            break;
        case 6:
            printf("\nPosi��o da lista para remo��o: ");
            scanf("%d", &K);
            removerNodo(LL, &FL, &IL, IA, FA, K, infoNodo);
            break;
        case 7:
            printf("\nInsira o valor para a busca: ");
            scanf("%d", &valBuscar);
            buscarLista(LL, &FL, &IL, valBuscar);
            break;
        default:
            printf("Lista encerrada!");
            break;
        }
    }
}

void iniciaLista(int *IL, int *FL, int IA){
    *IL = *FL = IA - 1;
}

int insertInit(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
    if ((IA == *IL) && (FA == *FL))
        return 1;
    else{
            if (*IL == -1)
                *IL = *FL = IA;
            else if (*IL > IA)
                *IL -= 1;
            else{
                for (int i = *FL; i >= *IL; i--){
                    LL[i+1] = LL[i];
                }
                *FL += 1;
            }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int insertMeio(int LL[], int *FL, int *IL, int IA, int FA, int K, int infoNodo){

    if (((IA == *IL) && (FA == *FL)) || (K > *FL - *IL + 2) || (K <= 0) || (K > FA))
        return 1;
    else 
    {
        if (*IL == -1)
            *IL = *FL = (FA+1)/2;
        else if ((*IL == IA) || ((*FL < FA) && (K > (*FL - *IL + 2 / 2)))){
            for (int i = *FL; i >= (*IL+K-1); i--){
                LL[i+1] = LL[i];
            }
            *FL +=1;
        }
        else {
            for (int i = *IL; i <= (*IL+K-1); i++){
                LL[i-1] = LL[i];
            }
            *IL -= 1;
            K += 1;
        }
        LL[*IL+K-1] = infoNodo;
        return 0;
    }
}

int insertFim(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
    if ((IA = *IL) && (FA = *FL)) 
        return 1;
    else{
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*FL < FA)
            *FL += 1;
        else{
            for (int i = *IL; i <= *FL; i++){
                LL[i-1] = LL[i];
            }
            *IL -= 1;
        }
        LL[*FL] = infoNodo;
        return 0;
    } 
}

int removerNodo(int LL[], int *FL, int *IL, int IA, int FA, int K, int infoNodo){
    if ((K <= 0) || (K > *FL - *IL + 1))
        return 1;
    else
    {
        for (int i = (*IL+K-1); i <= *FL; i++){
            LL[i] = LL[i+1];
        }
        *FL -= 1;
        if (*FL == *IL - 1)
            *IL = *FL = 0;
        return 0;
    }
}

void exibirLista(int LL[], int IL, int FL){
    if (IL == -1)
        printf("\nLista vazia!");
    else{
        for (int i = IL; i <= FL; i++){
            printf("[%d] ", LL[i]);
        }
    }
}

void buscarLista(int LL[], int *FL, int *IL, int valBuscar){
    bool achou = false;
    int pos = -1, i = *IL;
    
    while ((i <= *FL) && (!achou)){
        if (LL[i] == valBuscar){
            pos = i;
            achou = true;
        }
        else 
            i += 1;
    }
    if (pos != -1)
        printf("O valor foi encontrado na posi��o %d da lista!", pos+1);
    else
        printf("\nValor n�o encontrado!\n");
}
