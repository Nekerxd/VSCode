#include <stdio.h>
#include <locale.h>

void main(){

    int idade;
    setlocale(LC_ALL,"");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    idade >= 18 ? printf("Voc� tem %d e � maior de idade.", idade) : printf("Voc� tem %d e � menor de idade.", idade);
}
