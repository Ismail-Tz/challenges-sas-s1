#include<stdio.h.>
#include<stdlib.h>



int main(){
	
	int n , i , div = 0 ;
	printf("veuillez entrer le nombre svp:");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
		if(n%i==0){
			div++;
		}
	}
	
	if(div==2)
   {
      printf(" %d est un nombre premier.",n);
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",n);
   }
	
	
	
	
	
	
	return 0;
}
