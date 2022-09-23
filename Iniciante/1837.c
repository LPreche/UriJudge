#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int a,b,q,r;
scanf("%d %d",&a,&b);

if(b>0)
	q= floor((double) a/b);
else	
	q= ceil((double) a/b);
r= a-(b*q);
printf("%d %d\n",q,r);
	return 0;
}