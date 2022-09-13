#include<stdio.h.>
#include<stdlib.h>



int main(){
	
int i , n , somme = 0;


for(i=0;i<10;i++){
	printf("entrez un nombre : ");
	scanf("%d",&n);
	printf("\n");
	
	if(n<0){
		printf("veuillez entrer un nombre positif svp!!!!!");
		printf("\n");
		i--;
	}else{
		somme = somme + n;
	}
	
	
	
}


	printf("la somme de ces 10 nombres est : %d",somme);
	
	
	
	
	return 0;
}
