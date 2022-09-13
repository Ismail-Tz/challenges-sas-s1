#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int somme=0 , max = 0 , n =1;
	
while (n>0 && n<100){
	 printf ("entrez un nombre :");
     scanf("%d",&n);
     
     if (n==0){break;}
     if (n>100){continue;}
     
     somme = somme + n;
     if(max<n){
     	max = n;
	 }
}
	
	

	
//  for(int i=1;i<10;i++){
//  	printf ("entrez un nombre :");
//	scanf("%d",&n);
//	printf("\n");
//  	if(n<100){
//  		somme = somme + n;
//  		if(max < n){
//  	max = n;
//  }
//  }else if(n==0){
//  	   break;
//  } 
//  }
  
  printf(" la somme de ces nombres est : %d \n", somme);
  printf("le max de ces nombres est : %d", max);
  

return 0;
}
