#include<stdio.h>
#include<stdlib.h>

int main(){

int S,T,F,chd;
scanf("%d %d %d",&S,&T,&F);

chd=S+T+F;
if(chd == 24)
	chd=0;
else if(chd>24)
	chd=chd-24;
else if(chd<0)
	chd=24+chd;
printf("%d\n",chd);
return 0;
}