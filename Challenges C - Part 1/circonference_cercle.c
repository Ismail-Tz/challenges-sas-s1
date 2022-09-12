#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define Pi 3.14



int main() {
	 
	 float r = 0 ;
     
	 
	 printf("veuillez entrer le rayon du cercle svp!:")	;
	 
	 scanf("%f",&r);
	 
float circonference(float rayon){
	float resultat =0;
	resultat = 2*Pi*rayon;
	return resultat;
}

printf ("le circonference de ce cercle est %f", circonference(r));	 
	
	
	return 0;
}
