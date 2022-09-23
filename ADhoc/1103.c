#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int i=1,h1=1,m1=1,h2=1,m2=1,min1=0,min2=0,result=0;
	
	while(i==1){
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
		
		if((h1==0)&&(m1==0)&&(h2==0)&&(m2==0)){
			break;
		}		

		else if(h1 == 0){
			h1 = 24;			
		}
		else if(h2 == 0){
			h2 = 24;
		}
		min1 = ((h1*60) + m1);
		min2 = ((h2*60) + m2);
		
		if(min1 > min2){
			result =(1440 + min2)- min1;
		}
		else if(min2 >= min1){
			result = min2 - min1;
		}
		printf("%d\n",result);		
	}

return 0;
}