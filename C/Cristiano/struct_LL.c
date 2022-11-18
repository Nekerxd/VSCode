#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#define N 10

struct TipoNodo{
    int codigo;
    char nome[30];
    float altura;
};

typedef struct TipoNodo TipoNodo;

void iniciaLista(int *IL, int *FL, int IA);
void preencherNodo(TipoNodo *infoNodo);
void ordenarID(TipoNodo LL[], int *FL, int *IL);
int insertFim(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo);
int removerNodo(TipoNodo LL[], int *FL, int *IL);
void exibirLista(TipoNodo LL[], int IL, int FL);
int buscarLista(TipoNodo LL[], int *FL, int *IL, int valBuscar);

int main(){
    setlocale(LC_ALL, "");

    TipoNodo LL[N], infoNodo;
    int IA, FA, IL, FL, op, K, valBuscar;

    IA = 0;
    FA = N - 1;
    op = 1;

    iniciaLista(&IL, &FL, IA);

    while (op > 0 && op < 6){
        printf("\n\n====== Lista Linear Sequencial ======\n\n"
        "Escolha uma das seguintes op��es: \n"
        "[1] Limpar lista\n"
        "[2] Inserir ao fim\n"
        "[3] Exibir lista\n"
        "[4] Remover nodo\n"
        "[5] Encontrar na lista\n"
        "[6] Encerrar lista\n:");
        scanf("%d", &op);

        switch (op){
        case 1:
            iniciaLista(&IL, &FL, IA);
            break;
        case 2:
            preencherNodo(&infoNodo);
            insertFim(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 3:
            printf("A sua lista atualmente �: \n");
            exibirLista(LL, IL, FL);
            break;
        case 4:
            removerNodo(LL, &FL, &IL);
            break;
        case 5:
            printf("\nInsira o c�digo para a busca: ");
            scanf("%d", &valBuscar);
            printf("O valor %d foi encontrado na posi��o %d da lista!", valBuscar, buscarLista(LL, &FL, &IL, valBuscar));
            break;
        default:
            printf("Lista encerrada!");
            break;
        }
        ordenarID(LL, &FL, &IL);
    }
}

void iniciaLista(int *IL, int *FL, int IA){
    *IL = *FL = IA - 1;
}

void preencherNodo(TipoNodo *infoNodo){
    printf("\nInsira o c�digo: ");
    scanf("%d", &infoNodo->codigo);
    printf("\nInsira o nome: ");
    scanf(" %c", &infoNodo->nome);
    printf("\nInsira a altura: ");
    scanf("%f", &infoNodo->altura);
}

int insertFim(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo){
    int i;
    if ((IA == *IL) && (FA == *FL)) 
        return 1;
    else{
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*FL < FA)
            *FL += 1;
        else{
            for (i = *IL; i <= *FL; i++){
                LL[i-1] = LL[i];
            }
            *IL -= 1;
        }
        LL[*FL] = infoNodo;
        return 0;
    } 
}

int removerNodo(TipoNodo LL[], int *FL, int *IL){
    int i;
    if (*IL == -1)
        return 1;
    else
    {
        for (i = *IL; i < *FL; i++){
            LL[i] = LL[i+1];
        }
        *FL -= 1;
        return 0;
    }
}

void exibirLista(TipoNodo LL[], int IL, int FL){
    int i;
    if (IL == -1)
        printf("\nLista vazia!");
    else{
        for (i = IL; i <= FL; i++){
            printf("[%d] [%.2f] [%s]\n", LL[i].codigo, LL[i].altura, LL[i].nome);
        }
    }
}

int buscarLista(TipoNodo LL[], int *FL, int *IL, int valBuscar){
    int meio, posicao = 0, inf = *IL, sup = *FL;
    bool achou = false;

    while ((inf <= sup) && (!achou)){
        meio = (inf + sup)/2;
        if (LL[meio].codigo == valBuscar){
            posicao = meio;
            achou = true;
        }
        else if (LL[meio].codigo < valBuscar)
            inf = meio+1;
        else
            sup = meio-1;
    }
    return posicao;
}

void ordenarID(TipoNodo LL[], int *FL, int *IL){
    int i, j;
    TipoNodo temp;

    for (i = *IL; i < *FL; i++){
        for (j = i+1; j <= *FL; j++){
            if (LL[i].codigo > LL[j].codigo){
                temp = LL[i];
                LL[i] = LL[j];
                LL[j] = temp;
            }
        }
    }
}
