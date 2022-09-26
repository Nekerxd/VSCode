#include <stdio.h>
#include <locale.h>
#include <time.h>
#define N 5
// Vetor de 5 posições, deve mostrar o maior, o menor e a soma de todos.

int main(){
    setlocale(LC_ALL, "");
    int vet[N], i, maior, menor, soma;
    
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < N; i++){
        vet[i] = rand()%100;
    }

    printf("O maior número %d", higher(maior));
    printf("%d", lower(menor));
    printf("%d", sum(vet));
}

int higher(){

}

int lower(){

}

int sum(vet){

}