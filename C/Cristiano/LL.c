#include <stdio.h>
#include <locale.h>
#define N 6


struct Abc
{
    int codigo;
    char nome[50];
    int idade;
};

typedef struct Abc Abc

int main(){
    setlocale(LC_ALL, "");
    Abc LL[N];
    int IL, FL, IA, FA, i, infoNodo, escolha = 1;
    IA = 0;
    FA =  N-1;
    
    while (escolha != 0)
    {
        printf("Insira o valor: ");
        scanf("%d", &infoNodo);
        printf("Quer continuar? [0/1]: ");
        scanf("%d", &escolha);
        
    }
    

    func(LL, *FL, *IL, IA, FA, infoNodo);

    for (i = 0; i <= N; i++)
    {
        printf("%d", &LL[i]);
    }
    
}

func(LL, FL, IL, IA, FA){
    int i;

    if ((IA = IL) && (FA = FL))
        return 1; //deu erro - lista cheia!!
    
    else
        if (IL = 0) //Se LL vazio
            IL = FL = IA;
        else if (IL > IA) //Se tiver espaço
            IL = IL-1; // no início da lista
        else
            for (i = FL; i <= IL; i--){
                LL[i+1] = LL[i];
            }
            FL = FL + 1;
        LL[IL] = infoNodo;
        return 0;
}