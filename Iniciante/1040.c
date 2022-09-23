#include <stdio.h>
 
int main() {
    
float n1,n2,n3,n4,med;

scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
med =(((n1*2)+(n2*3)+(n3*4)+(n4*1))/10);
printf("Media: %.1f\n",med);
if(med>=7.0){
  printf("Aluno aprovado.\n");
}else if(med>=5.0 & med<6.9){
  float ne,mex;
  printf("Aluno em exame.\n");
  scanf("%f",&ne);
  printf("Nota do exame: %0.1f\n",ne);
  mex=((med+ne)/2);
  if(mex>=5)
    printf("Aluno aprovado.\n");
  else
    printf("Aluno reprovado.\n");
  
  printf("Media final: %0.1f\n",mex);
}else
  printf("Aluno reprovado.\n");

return 0;
}