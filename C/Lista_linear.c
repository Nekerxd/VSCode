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
            else if (IL > IA) //Se tiver espaço
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
    se (IA = IL) e (FA = FL) então
    Sucesso <- falso
    senão início
        se IL = 0 então
            IL <- FL <- IA
    senão se IL > IA então
        IL <- IL-1
    senão
    início
        para i de FL incr 1 até IL faça
            LL[i+1] <- LL[i]
        FL <- FL+1
    fim
    LL[IL] <- infoNodo
    Sucesso <- verdadeiro
    fim
fim
} 

int InsertMeio(){
início
    se (IA = IL e FA = FL) ou (K > FL - IL + 2) ou (K <= 0) ou (IL = 0 e K != 1) então
        Sucesso <- falso
    senão 
    início
        se IL = 0 então
            IL <- FL <- IA
        senão se FL < FA então
        início
            para Ind de FL incr -1 até IL + K - 1 faça
                LL[Ind + 1] <- LL[Ind]
            FL <- FL + 1
        fim
        senão início
            para Ind de IL incr 1 até IL + K - 1 faça
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
início
    se (IA = IL e FA = FL) ou (K > FL - IL + 2) ou (K <= 0) ou (K > FA) então
        Sucesso <- falso
    senão 
    início
        se IL = 0 então
            IL <- FL <- (FA+1) div 2
        senão se IL = IA ou ((FL < FA) e (K > (FL - IL + 2 / 2))) então
        início
            para Ind de FL incr -1 até IL + K - 1 faça
                LL[Ind + 1] <- LL[Ind]
            FL <- FL + 1
        fim
        senão início
            para Ind de IL incr 1 até IL + K - 1 faça
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
início
    se (K <= 0) ou (K > FL - IL + 1) então
        Sucesso <- falso
    senão
    início
        para i de IL + K - 1 incr 1 até FL faça
            LL[i] <- LL[i+1]
        FL <- FL - 1
        se FL = IL - 1 então
            IL <- FL <- 0
        Sucesso <- verdadeiro
    fim
fim
}

int AcessoNodoOrdem(){
início
    se (K <= 0) ou (K > FL - IL + 1) ou (IL = 0) então
        Sucesso <- falso
    senão início
        infoNodo <- LL[IL + K - 1]
        Sucesso <- verdadeiro
    fim
fim
}

int AcessoNodoConteúdo(){
início
    Achou <- falso
    Posição <- 0
    I <- IL
    enquanto (I <= FL) e (não achou) faça
        se LL[I].Valor = ValBuscado então
        início
            Posição <- (I - IL + 1)
            Achou <- verdadeiro
            fim
        senão
            I <- I + 1
    retorna posição
fim
}

int AcessoNodoConteúdoOrdenado(){
início
    Achou <- falso
    Posição <- 0
    Inf <- IL
    Sup <- FL
    enquanto (Inf <= Sup) e (não Achou) faça
    início
        Meio <- (Inf + Sup) div 2
        se LL[Meio].Valor = ValorBuscado então
        início
            Posição <- Meio
            Achou <- verdadeiro
        fim
        senão se LL[Meio].Valor < ValBuscado então
            Inf <- Meio + 1
        senão
            Sup <- Meio - 1
    fim
    retorna posição
fim
}
