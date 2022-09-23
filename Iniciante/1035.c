#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A, B, C,D,CD,AB,PA;
	scanf("%d" "%d" "%d" "%d",&A,&B,&C,&D);
	CD = C+D;
	AB = A+B;
	PA = A % 2;
	if((B > C) && (D > A) && (CD > AB) && (PA == 0) && (C > 0) && (D > 0)){
		printf ("Valores aceitos\n");
	}
	
	else {
		printf ("Valores nao aceitos\n");
	}
	return 0;
}