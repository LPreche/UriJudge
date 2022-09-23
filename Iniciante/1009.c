#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    double salario,vendas,sal_final;
    scanf("%s""%lf""%lf",nome,&salario,&vendas);
    sal_final = ((vendas * 0.15)+ salario);
    printf ("TOTAL = R$ %.2lf\n",sal_final);


    return 0;
}