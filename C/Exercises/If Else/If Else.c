#include <stdio.h>
#include <locale.h>

void main(){

    float n1, n2, n3, n4, media;
    setlocale(LC_ALL,"");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a primeira nota: ");
    scanf("%f", &n2);
    printf("Digite a primeira nota: ");
    scanf("%f", &n3);
    printf("Digite a primeira nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 6){
        printf("A sua m�dia � %.2f e voc� est� aprovado.", media);
    } else if (media < 6 && media >= 3) {
        printf("A sua m�dia � %.2f e voc� est� de recupera��o", media);
    } else {
        printf("A sua m�dia � %.2f e voc� est� reprovado.", media);
    }

}
