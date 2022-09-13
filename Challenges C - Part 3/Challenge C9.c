#include<stdio.h.>
#include<stdlib.h>



int main(){
	
int n= 0 , p = 0 , res = 1;

do{
	printf("entrez un nombre superieure strictement a 0  svp:");
	scanf("%d",&n);
}while(n<=0);

do{
	printf("\nentrez une puissance positif svp!!!!!!:");
	scanf("%d",&p);
}while(p<0);
int d = p;

while(n>0 && p>=0){
	if(p==0){
		res =  res * 1;
		p--;
		
		
}else{
	    res = res * n ;
		p--;
	}
	
}
printf(" %d a la puissance %d egal a : %d", n , d , res);





	
	
	return 0;
}
