// DESAFIO: Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

//         5
//       4 5 6
//     3 4 5 6 7
//   2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9

// Quantidade de espaços

//  N-1 8
//  N-3 6
//  N-5 4
//  N-7 2
//  N-9 0

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num = 9, i, j, k, cont, espc = num, linha, nums[num], mediana;
    
    cont = linha = 0;

    for (i = 0; i < num; i++){
        nums[i] = i+1;
    }
    
    mediana = nums[(num-1)/2];

    for(i = 1; i <= (num/2) + 0.5; i++){
        for(k = espc; k >= 1; k--){
            printf(" ");
        }
        for(j = 1; j <= i ; j++){
            printf("%d ", cont);
            cont++;
        }
         linha++;
	printf("\n");
    espc--;
    }
}