#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int primeiro_digito(char str[][14],int lin){
	int n1,n2,r;
	n1=(int)str[lin][2];
	n2=(int)str[lin][3];
	if((n1>47)&&(n1<58)){
		n1=n1-48;
		if((n2>47)&&(n2<58))
			n1=n1*10;
	}else
		n1=0;

	if((n2>47)&&(n2<58))
		n2=n2-48;
	else	
		n2=0;
	
	r=n1+n2;
    return r;
}

int segundo_digito (char str[][14],int lin){
	int n1,n2,n3,r;
	n1=(int)str[lin][5];
	n2=(int)str[lin][6];
	n3=(int)str[lin][7];

	if((n1>47)&&(n1<58)){
		n1=n1-48;
		if((n3<48)||(n3>58))
			n1=n1*10;
		else if((n2>47)&&(n2<58))
			n1=n1*100;
	}else
		n1=0;

	if((n2>47)&&(n2<58)){
		n2=n2-48;
		if((n3>47)&&(n3<58))
			n2=n2*10;
	}else
		n2=0;
	
	if((n3>47)&&(n3<58))
		n3=n3-48;
	else	
		n3=0;

	r=n1+n2+n3;
	return r;
}

int terceiro_digito(char str[][14],int lin){
	int n1,n2,r;
	n1=(int)str[lin][11];
	n2=(int)str[lin][12];

	if((n1>47)&&(n1<58)){
		n1=n1-48;
		if((n2>47)&&(n2<58))
			n1=n1*10;
		
	}else
		n1=0;

	

	if((n2>47)&&(n2<58))
		n2=n2-48;
	else
		n2=0;

	r=n1+n2;
    return r;
}
int main(){

    int n,i=0;
    int d1,d2,d3,res;
    scanf("%d",&n);
    char val[n][14];

    for(i=0;i<n;i++)
        scanf("%s",val[i]);

	for(i=0;i<n;i++){
		d1=primeiro_digito(val,i);
		d2=segundo_digito(val,i);
		d3=terceiro_digito(val,i);
		res=d1+d2+d3;
		printf("%d\n",res);
	}
	
    return 0 ;

}
