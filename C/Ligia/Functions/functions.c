#include <stdio.h>

float sal, nsal, s, x, y;
//Sem par�metro e sem retorno.
void aumentoSS()
{
    float sal, nsal;
    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);
    if (sal >= 1000) {
        nsal = sal + (sal*0.1);
        printf("O novo sal�rio ser� R$%.2f \n", nsal);
    }
    else
    {
        nsal = sal + (sal*0.05);
        printf("O novo sal�rio ser� R$%.2f \n", nsal);
    }
}
//Sem par�metro e com retorno.
float aumentoSC()
{
    float sal, nsal;
    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);
    if (sal >= 1000) {
        nsal = sal + (sal*0.1);
    }
    else
        nsal = sal + (sal*0.05);
    return nsal;
}
//Com par�metro e sem retorno.
void aumentoCS(float x)
{
    float s = 0;
    if (x >= 1000){
        s = x + (x*0.1); 
    }
    else
        s = x + (x*0.05);
    printf("O novo sal�rio ser� R$%.2f \n", s);
}
//Com par�metro e com retorno.
int aumentoCC(float x)
{
    float s;
    if (x >= 1000){
        s = x + (x*0.1); 
    }
    else
        s = x + (x*0.05);
    return s;
}