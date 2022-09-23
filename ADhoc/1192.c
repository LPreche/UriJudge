#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int nx,i=0;
	scanf("%d",&nx);
	char let[nx];
	int result[nx],num[nx],num2[nx];
while(i < nx){
	scanf("%d %c %d",&num[i],&let[i],&num2[i]);
	i++;
}
i=0;
while(i < nx){
	if(num[i]==num2[i]){
		result[i]=num[i]*num[i];		
	}
	else if(isupper(let[i])){
		result[i]=num2[i]-num[i];	
	}
	else if(islower(let[i])){
		result[i]=num[i] + num2[i];	
	}
	i++;
}
i=0;
while(i<nx){
	printf("%d\n",result[i]);
	i++;
}



return 0;
}