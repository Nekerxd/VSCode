#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct tipoNodo{
    int Info;
    struct tipoNodo *Elo;
};

typedef struct tipoNodo TipoNodo;

//Prot�tipos
int menu(void);
int insereIni(TipoNodo **PtLista, int Dados);
int insereFim(TipoNodo **PtLista, int Dados);
int removeNodo(TipoNodo **PtLista, int K);
int acessoNodo(TipoNodo **PtLista, int K);
void destruirLista(TipoNodo **PtLista);
void mostra(TipoNodo *PtLista);

int main(){

    setlocale(LC_ALL, "");

    TipoNodo *PtLista;
    int Dados, op, sucesso, K;
    PtLista = NULL; //Cria��o de Uma Lista Linear Encadeada

    do
    {
        op=menu();
        switch(op)
        {
            case 1:
                printf("Digite um n�mero: ");
                scanf("%d",&Dados);
                sucesso = insereIni(&PtLista, Dados);
                (sucesso == 0 ? printf("\nSucesso!\n") : printf("\nFalha!\n"));
                break;
            case 2:
                printf("Digite um n�mero: ");
                scanf("%d",&Dados);
                sucesso = insereFim(&PtLista, Dados);
                (sucesso == 0 ? printf("\nSucesso!\n") : printf("\nFalha!\n"));
                break;
            case 3:
                printf("Insira a posi��o do elemento a ser removido: ");
                scanf("%d",&K);
                sucesso = removeNodo(&PtLista, K);
                (sucesso == 0 ? printf("\nSucesso!\n") : printf("\nFalha!\n"));
                break;
            case 4:
                printf("A qual posi��o da lista deseja ter acesso: ");
                scanf("%d", &K);
                printf("O elemento da posi��o %d cont�m o valor %d", K, acessoNodo(&PtLista, K));
                break;
            case 5:
                mostra(PtLista);
                break;
            case 6:
                destruirLista(&PtLista);
                printf("Lista destru�da!");
                break;
            default:
                if(op!=0)
                    printf("\nOp��o inv�lida!\n");
        }
    }while(op!=0);
}

int menu(void){
    int op;
    printf("\n\t\t\t*--------- MENU ---------*"
    "\n\t\t\t|  [1] Inserir In�cio    |"
    "\n\t\t\t|  [2] Inserir Fim       |"
    "\n\t\t\t|  [3] Remo��o Nodo      |"
    "\n\t\t\t|  [4] Acesso Nodo       |"
    "\n\t\t\t|  [5] Mostrar           |"
    "\n\t\t\t|  [6] Destruir Lista    |"
    "\n\t\t\t|  [0] Sair              |"
    "\n\t\t\t*------------------------*\n"
    "\nDigite uma op��o: ");
    scanf("%d",&op);
    return op;
}

//Inser��o no fim da lista encadeada
int insereFim(TipoNodo **PtLista, int Dados){
    TipoNodo* ptAux;
    // Cria um novo nodo e aloca espa�o na mem�ria
    TipoNodo* PtNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    //Nodo est� vazio?
    if (PtNovo == NULL)
        //Retorna 1 para erro
        return 1;
    //Nodo n�o est� fazio?
    else{
        //Novo nodo recebe os dados desejados
        PtNovo->Info = Dados;
        //Novo nodo aponta para vazio
        PtNovo->Elo = NULL;
        //Lista vazia?
        if (*PtLista == NULL)
            //Lista aponta para Novo nodo
            *PtLista = PtNovo;
        //Lista n�o est� vazia?
        else{
            //Nodo auxiliar recebe o conte�do da lista
            ptAux = *PtLista;
            //Enquanto n�o encontrar o �ltimo elemento que aponta para vazio, passa para o proximo elo
            while (ptAux->Elo != NULL){
                ptAux = ptAux->Elo;
            }
            //Faz o �ltimo elemento apontar para o Novo nodo
            ptAux->Elo = PtNovo;
            }
        //Retorna 0 para sucesso
        return 0;
    }
}

//Inser��o no in�cio da lista encadeada
int insereIni(TipoNodo **PtLista, int Dados){
    // Cria um novo nodo e aloca espa�o na mem�ria
    TipoNodo* PtNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    //Novo nodo est� vazio?
    if  (PtNovo == NULL)
        //Retorna 1 para erro
        return 1;
    //Sen�o
    else
    {
        //Info do Novo nodo recebe os dados desejados
        PtNovo->Info=Dados;
        //Elo do Novo nodo aponta para a lista
        PtNovo->Elo=*PtLista; 
        //Lista recebe a lista de com Novo inserido
        *PtLista = PtNovo;
        return 0;
    }
}

//Mostrar a lista encadeada
void mostra(TipoNodo *PtLista)
{
    TipoNodo *p;
    //Mostra a Info dos Nodo at� encontrar o �ltimo elemento apontando para Nulo
    for( p = PtLista; p != NULL; p = p->Elo)
        printf("%d\t",p->Info);
}

// Remo��o de um Nodo em uma posi��o X
int removeNodo(TipoNodo **PtLista, int K){
    TipoNodo* PtK; TipoNodo* PtAnt;
    if (K < 1)
        return 1;
    else{
        PtK = *PtLista;
        PtAnt = NULL;
        while (PtK != NULL && K > 1){
            K -= 1;
            PtAnt = PtK;
            PtK = PtK->Elo;
        }
        if (PtK == NULL)
            return 1;
        else{
            if (PtK == *PtLista)
                *PtLista = PtK->Elo;
            else
                PtAnt->Elo = PtK->Elo;
            free(PtK);
            return 0;
        }      
    }
}

// Acesso a um nodo em uma posi��o X
int acessoNodo(TipoNodo **PtLista, int K){
    TipoNodo* PtK;
    
    //Se K estiver antes da lista ou Lista vazia
    if (K < 1 || *PtLista == NULL)
        PtK = NULL;
    else{
        PtK = *PtLista;
        //Enquanto n�o for o final da lista E n�o chegar em K, passa para o pr�ximo Nodo
        while (PtK != NULL && K > 1){
            K -= 1;
            PtK = PtK->Elo;
        }
        //Se chegou ao final da lista e K ainda n�o tiver sido alcan�ado
        if (K > 1)
            PtK = NULL;
    }
    //Retorna o valor contido em K
    return PtK->Info;
}

// Destrui��o da lista encadeada
void destruirLista(TipoNodo **PtLista){
    TipoNodo* PtRemover;

    //Enquanto n�o chegar ao final da lista, elimina um nodo e passa o pr�ximo
    while (*PtLista != NULL){
        PtRemover = *PtLista;
        *PtLista = PtRemover->Elo;
        free(PtRemover);
    }
    //Ap�s a lista estiver vazia, desaloca ela da mem�ria
    free(*PtLista);
}