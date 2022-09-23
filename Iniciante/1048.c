#include <stdio.h>

int main(){
  float sal,salaj,vlraj;
  scanf("%f",&sal);

  if(sal>=0 & sal<=400){
    vlraj=sal*0.15;
    salaj=sal+vlraj;
    printf("Novo salario: %.2f\n",salaj);
    printf("Reajuste ganho: %.2f\n",vlraj);
    printf("Em percentual: 15 %%\n");
  }else if(sal>=400.01 & sal<=800){
    vlraj=sal*0.12;
    salaj=sal+vlraj;
    printf("Novo salario: %.2f\n",salaj);
    printf("Reajuste ganho: %.2f\n",vlraj);
    printf("Em percentual: 12 %%\n");
  }else if(sal>=800.01 & sal<=1200){
    vlraj=sal*0.10;
    salaj=sal+vlraj;
    printf("Novo salario: %.2f\n",salaj);
    printf("Reajuste ganho: %.2f\n",vlraj);
    printf("Em percentual: 10 %%\n");    
  }else if(sal>=1200.01 & sal<=2000){
    vlraj=sal*0.07;
    salaj=sal+vlraj;
    printf("Novo salario: %.2f\n",salaj);
    printf("Reajuste ganho: %.2f\n",vlraj);
    printf("Em percentual: 7 %%\n");
  }else if(sal>=2000.01){
    vlraj=sal*0.04;
    salaj=sal+vlraj;
    printf("Novo salario: %.2f\n",salaj);
    printf("Reajuste ganho: %.2f\n",vlraj);
    printf("Em percentual: 4 %%\n");
  }
  return 0;
}