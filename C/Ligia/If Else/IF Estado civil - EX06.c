#include <stdio.h>
#include <locale.h>

void main(){

    char estado;
    setlocale(LC_ALL,"");

    printf("Estado civil \n S - Solteiro(a) \n C - Casado(a) \n D - Divorciado(a) \n V - Vi�vo(a) \n Escolha uma op��o (s, c, d ou v): ");
    scanf("%c", &estado);
    if (estado == 's' || estado == 'S') {
        printf("Seu estado civil � solteiro.");
    } else if (estado == 'c' || estado == 'C') {
        printf("Seu estado civil � casado.");
    } else if (estado == 'd' || estado == 'D') {
        printf("Seu estado civil � divorciado.");
    } else if (estado == 'v' || estado == 'V') {
        printf("Seu estado civil � vi�vo.");
    } else {
        printf("Op��o inv�lida.");
    }
}
