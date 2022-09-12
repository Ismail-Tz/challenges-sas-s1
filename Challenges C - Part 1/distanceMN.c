#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	 float x1=0,x2=0,y1=0,y2=0;
	 printf ("---------------------la premiere point M------------------------------\n");
	 printf("Veuillez entrer les coordonnees de la premiere point M:\n");
	 printf("Entrez x1:");
	 scanf("%f",&x1);
	 printf("Entrez y1:");
     scanf("%f",&y1);
     printf ("---------------------la deuxieme point N------------------------------\n");
	 printf("Veuillez entrer les coordonnees de la deuxieme point N:\n");
	 printf("Entrez x2:");
	 scanf("%f",&x2);
	 printf("Entrez y2:");
     scanf("%f",&y2);  
     
     float distanceMN=0;
     
     distanceMN=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     
     printf("la distance entre M(%.1f,%.1f) et N(%.1f,%.1f) est : %.1f ",x1,y1,x2,y2,distanceMN);
	
	return 0;
}
