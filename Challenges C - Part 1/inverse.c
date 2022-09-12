#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	 char inverse[4];
	 int nbr=0;
	 printf("Entrez un nombre svp :");
	 scanf("%d",&nbr);
	 22
void toinverse(int n){
	int r1,r2,r3,r4,r5;
	r1=0;r2=0;r3=0;r4=0;r5=0;
	r1=n/100;

	r3=n%100;
	r4=r3/10;
	r5=r3%10;
	//char* inverse =malloc(3*sizeof(char));
	//inverse[1]=r5;
	//inverse[2]=r1;
	//inverse[3]='/0';
	printf ("l inverse du nombre saisie est:%d%d%d ",r5,r4,r1);

	return ;
}

    toinverse(nbr);
	//printf("l inverse du nombre saisie est : %s" ,toinverse(&inverse[nbr]));



	return 0;
}
