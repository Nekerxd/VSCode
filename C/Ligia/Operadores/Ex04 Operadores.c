#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL,"");
    float dist, litros, med;

    printf("Informe a dist�ncia percorrida: ");
    scanf("%f", &dist);
    printf("Informe a quantidade de litros gastos: ");
    scanf("%f", &litros);
    med = dist / litros;
    printf("O consumo m�dio do ve�culo �: %.2f km/l \n", med);
    system("pause");
}
