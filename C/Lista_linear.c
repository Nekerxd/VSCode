#include <stdio.h>
#include <locale.h>
#define N 6

func(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo);

int main(){
    setlocale(LC_ALL, "");
    int LL[N], IL = 0, FL, IA, FA, i, infoNodo;

    IA = 0;
    FA =  N-1;
    
    printf("Insira o valor: ");
    scanf("%d", &infoNodo);
    

    func(LL, &FL, &IL, IA, FA, infoNodo);

    printf("[%d]\n", &LL[0]);
    
}

int func(int LL[], int *FL, int *IL, int IA, int FA, int infoNodo){
    int i;

    if ((IA == *IL) && (FA == *FL))
        return 1; //deu erro - lista cheia!!    
    else{
        if (*IL == 0) //Se LL vazio
            *IL = *FL = IA;
        else if (*IL > IA) //Se tiver espaço
            *IL -= 1; // no início da lista
        else{
            for (i = *FL; i >= *IL; i--){
                LL[i+1] = LL[i];
            }
            *FL += 1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}