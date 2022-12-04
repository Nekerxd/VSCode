#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct tipoNodo{
    int info;
    struct tipoNodo *elo;
};

typedef struct tipoNodo TipoNodo;

//Protótipos
int menu(void);
int insereIni(TipoNodo **ptlista, int dados);
int insereFim(TipoNodo **ptlista, int dados);
int removeNodo(TipoNodo **ptlista, int K);
int acessoNodo(TipoNodo **ptlista, int K);
void destruirLista(TipoNodo **ptlista);
void mostra(TipoNodo *ptlista);

int main(){

    setlocale(LC_ALL, "");

    TipoNodo *ptlista;
    int dados, op, sucesso, K;
    ptlista = NULL; //Criação de Uma Lista Linear Encadeada

    do
    {
        op=menu();
        switch(op)
        {
            case 1:
                printf("Digite um número: ");
                scanf("%d",&dados);
                sucesso = insereIni(&ptlista, dados);
                if (sucesso == 0)
                    printf("\nDeu certo!!!\n");
                else
                    printf("\nErro!!!\n");
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d",&dados);
                sucesso = insereFim(&ptlista, dados);
                if(sucesso == 0)
                    printf("\nDeu certo!!!\n");
                else
                    printf("\nErro!!!\n");
                break;
            case 3:
                printf("Insira a posição do elemento a ser removido: ");
                scanf("%d",&K);
                sucesso = removeNodo(&ptlista, K);
                if(sucesso == 0)
                    printf("\nDeu certo!!!\n");
                else
                    printf("\nErro!!!\n");
                break;
            case 4:
                printf("A qual posição da lista deseja ter acesso: ");
                scanf("%d", &K);
                printf("O elemento da posição %d contém o valor %d", K, acessoNodo(&ptlista, K));
                break;
            case 5:
                mostra(ptlista);
                break;
            case 6:
                destruirLista(&ptlista);
                printf("Lista destruída!!!");
                break;
            default:
                if(op!=0)
                    printf("\nOpção inválida!!!\n");
        }
    }while(op!=0);
}

int menu(void){
    int op;
    printf("\n\t\t\t*--------- MENU ---------*"
    "\n\t\t\t|  [1] Inserir Inicio    |"
    "\n\t\t\t|  [2] Inserir Fim       |"
    "\n\t\t\t|  [3] Remoção Nodo      |"
    "\n\t\t\t|  [4] Acesso Nodo       |"
    "\n\t\t\t|  [5] Mostrar           |"
    "\n\t\t\t|  [6] Destruir Lista    |"
    "\n\t\t\t|  [0] Sair              |"
    "\n\t\t\t*------------------------*\n"
    "\nDigite uma opcao: ");
    scanf("%d",&op);
    return op;
}

//Inserção no fim da lista encadeada
int insereFim(TipoNodo **ptlista, int dados){
    TipoNodo* ptAux;
    TipoNodo* ptNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    if (ptNovo == NULL)
        return 1;
    else{
        ptNovo->info = dados;
        ptNovo->elo = NULL;
        if (*ptlista == NULL)
            *ptlista = ptNovo;
        else{
            ptAux = *ptlista;
            while (ptAux->elo != NULL){
                ptAux = ptAux->elo;}
            ptAux->elo = ptNovo;
            }
        return 0;
    }
}

//Inserção no início da lista encadeada
int insereIni(TipoNodo **ptlista, int dados){
    TipoNodo* ptNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    if  (ptNovo == NULL)
        return 1;
    else
    {
        ptNovo->info=dados;
        ptNovo->elo=*ptlista; 
        *ptlista = ptNovo;
        return 0;
    }
}

//Mostrar a lista encadeada
void mostra(TipoNodo *ptlista)
{
    TipoNodo *p;
    for( p = ptlista; p != NULL; p = p->elo)
        printf("%d\t",p->info);
}

// Remoção de um Nodo em uma posição X
int removeNodo(TipoNodo **ptlista, int K){
    TipoNodo* PtK; TipoNodo* PtAnt;
    if (K < 1)
        return 1;
    else{
        PtK = *ptlista;
        PtAnt = NULL;
        while (PtK != NULL && K > 1){
            K -= 1;
            PtAnt = PtK;
            PtK = PtK->elo;
        }
        if (PtK == NULL)
            return 1;
        else{
            if (PtK == *ptlista)
                *ptlista = PtK->elo;
            else
                PtAnt->elo = PtK->elo;
            free(PtK);
            return 0;
        }      
    }
}

// Acesso a um nodo em uma posição X
int acessoNodo(TipoNodo **ptlista, int K){
    TipoNodo* PtK;
    
    if (K < 1 || *ptlista == NULL)
        PtK = NULL;
    else{
        PtK = *ptlista;
        while (PtK != NULL && K > 1){
            K -= 1;
            PtK = PtK->elo;
        }
        if (K > 1)
            PtK = NULL;
    }
    return PtK->info;
}

// Destruição da lista encadeada
void destruirLista(TipoNodo **ptlista){
    TipoNodo* PtRemover;
    while (*ptlista != NULL){
        PtRemover = *ptlista;
        *ptlista = PtRemover->elo;
        free(PtRemover);
    }
    free(*ptlista);
}