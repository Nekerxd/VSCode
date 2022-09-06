#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i;

    printf("Insira um número: ");
    scanf("%d", &num);
    printf("%d",num);

    for (i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }
}
