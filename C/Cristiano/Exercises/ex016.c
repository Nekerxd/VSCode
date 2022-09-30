#include <stdio.h>
#include <locale.h>
#include <time.h>
#define V 50
#define C 5

int main(){
    int voto[V], candidato[C], i, vencedor;
    setlocale(LC_ALL, "");

    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < V; i++){
        voto[i] = rand()%6;
        if (i >-1 && i < C)
            candidato[i] = 0;
        candidato[voto[i]-1]++;
    }
    printf("Total de votos por candidato\n");
    for (i = 0; i < C; i++){
    printf("\nCandidato %d: %d", i, candidato[i]);
    }

    for (i = 0; i < C; i++){
        if (i == 0)
            vencedor = 0;
        vencedor = (candidato[vencedor] > candidato[i] ? vencedor : i);
    }
    printf("\nO vencedor é o canditado %d com %d votos!", vencedor, candidato[vencedor]);
    
}