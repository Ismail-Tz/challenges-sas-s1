#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
       int heure1 , minute1 , seconde1 , heure2 , minute2,seconde2;
	   printf("-------------------1-----------------------\n");
   printf ("entrer l heure : ");
   scanf("%d",&heure1);
   printf ("entrer minutes: ");
   scanf("%d",&minute1);
   printf ("entrer secondes : ");
   scanf("%d",&seconde1);
   
   printf("l heure entree est : %d : %d : %d", heure1,minute1,seconde1);
   
   printf("\n-------------------2-----------------------\n");
   printf ("entrer l heure : ");
   scanf("%d",&heure2);
   printf ("entrer minutes: ");
   scanf("%d",&minute2);
   printf ("entrer secondes : ");
   scanf("%d",&seconde2);
   
   printf("l heure entree est : %d : %d : %d \n", heure2,minute2,seconde2);
 
	int t1 = heure1*3600 + minute1*60 + seconde1;
	int t2 = heure2*3600 + minute2*60 + seconde2;
	
	
	if(t1<t2){
		
	printf("Le premier instant vient avant le deuxieme");
	}else if (t1>t2){
		printf("Le deuxieme instant vient avant le premier");
		
	}else {
			printf("Il s'agit du meme instant.");
		
	}
	
	
	return 0; 
}
