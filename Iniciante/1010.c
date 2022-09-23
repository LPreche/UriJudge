#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cod_peca1,cod_peca2,n_peca1,n_peca2;
  float Vu_peca1,Vu_peca2,total;

  scanf("%d""%d""%f",&cod_peca1,&n_peca1,&Vu_peca1);
  scanf("%d""%d""%f",&cod_peca2,&n_peca2,&Vu_peca2);
  total = ((Vu_peca1 * n_peca1)+(Vu_peca2 * n_peca2));
  printf ("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
