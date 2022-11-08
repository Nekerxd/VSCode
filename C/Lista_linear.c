#include <stdio.h>
#include <locale.h>
#define N 6

func(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);

int main(){
    setlocale(LC_ALL, "");
    int LL[N], IL, FL, IA, FA, i, infoNodo;

    IL = IA = 0;
    FA =  N-1;
    
    printf("Insira o valor: ");
    scanf("%d", &infoNodo);
    

    func(LL, &FL, &IL, IA, FA, infoNodo);

    printf("[%d]\n", &LL[0]);
    
}

int InsertInit(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
{
    if ((IA = IL) && (FA = FL))
        return 1; //deu erro - lista cheia!!    
    else
        {
            if (IL == 0) //Se LL vazio
                IL = FL = IA;
            else if (IL > IA) //Se tiver espa�o
                IL -= 1; // no in?cio da lista
            else
            {
                for (i = FL; i <= IL; i--){
                    LL[i+1] = LL[i];
                FL += 1;
                }
            }
        }
        LL[*IL] = infoNodo;
        return 0;
}
}

int InsertFim(){
{
    se (IA = IL) e (FA = FL) ent�o
    Sucesso <- falso
    sen�o in�cio
        se IL = 0 ent�o
            IL <- FL <- IA
    sen�o se IL > IA ent�o
        IL <- IL-1
    sen�o
    in�cio
        para i de FL incr 1 at� IL fa�a
            LL[i+1] <- LL[i]
        FL <- FL+1
    fim
    LL[IL] <- infoNodo
    Sucesso <- verdadeiro
    fim
fim
} 

int InsertMeio(){
in�cio
    se (IA = IL e FA = FL) ou (K > FL - IL + 2) ou (K <= 0) ou (IL = 0 e K != 1) ent�o
        Sucesso <- falso
    sen�o 
    in�cio
        se IL = 0 ent�o
            IL <- FL <- IA
        sen�o se FL < FA ent�o
        in�cio
            para Ind de FL incr -1 at� IL + K - 1 fa�a
                LL[Ind + 1] <- LL[Ind]
            FL <- FL + 1
        fim
        sen�o in�cio
            para Ind de IL incr 1 at� IL + K - 1 fa�a
                LL[Ind - 1] <- LL[Ind]
            IL <- IL - 1
            K <- K + 1
        fim
        LL[IL + K - 1] <- infoNodo
        Sucesso <- verdadeiro
    fim
fim
}

int InsertMeioOtimizado(){
in�cio
    se (IA = IL e FA = FL) ou (K > FL - IL + 2) ou (K <= 0) ou (K > FA) ent�o
        Sucesso <- falso
    sen�o 
    in�cio
        se IL = 0 ent�o
            IL <- FL <- (FA+1) div 2
        sen�o se IL = IA ou ((FL < FA) e (K > (FL - IL + 2 / 2))) ent�o
        in�cio
            para Ind de FL incr -1 at� IL + K - 1 fa�a
                LL[Ind + 1] <- LL[Ind]
            FL <- FL + 1
        fim
        sen�o in�cio
            para Ind de IL incr 1 at� IL + K - 1 fa�a
                LL[Ind - 1] <- LL[Ind]
            IL <- IL - 1
            K <- K + 1
        fim
        LL[IL + K - 1] <- infoNodo
        Sucesso <- verdadeiro
    fim
fim
}

int RemoveNodo(){
in�cio
    se (K <= 0) ou (K > FL - IL + 1) ent�o
        Sucesso <- falso
    sen�o
    in�cio
        para i de IL + K - 1 incr 1 at� FL fa�a
            LL[i] <- LL[i+1]
        FL <- FL - 1
        se FL = IL - 1 ent�o
            IL <- FL <- 0
        Sucesso <- verdadeiro
    fim
fim
}

int AcessoNodoOrdem(){
in�cio
    se (K <= 0) ou (K > FL - IL + 1) ou (IL = 0) ent�o
        Sucesso <- falso
    sen�o in�cio
        infoNodo <- LL[IL + K - 1]
        Sucesso <- verdadeiro
    fim
fim
}

int AcessoNodoConte�do(){
in�cio
    Achou <- falso
    Posi��o <- 0
    I <- IL
    enquanto (I <= FL) e (n�o achou) fa�a
        se LL[I].Valor = ValBuscado ent�o
        in�cio
            Posi��o <- (I - IL + 1)
            Achou <- verdadeiro
            fim
        sen�o
            I <- I + 1
    retorna posi��o
fim
}

int AcessoNodoConte�doOrdenado(){
in�cio
    Achou <- falso
    Posi��o <- 0
    Inf <- IL
    Sup <- FL
    enquanto (Inf <= Sup) e (n�o Achou) fa�a
    in�cio
        Meio <- (Inf + Sup) div 2
        se LL[Meio].Valor = ValorBuscado ent�o
        in�cio
            Posi��o <- Meio
            Achou <- verdadeiro
        fim
        sen�o se LL[Meio].Valor < ValBuscado ent�o
            Inf <- Meio + 1
        sen�o
            Sup <- Meio - 1
    fim
    retorna posi��o
fim
}
