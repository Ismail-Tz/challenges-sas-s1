#include <stdio.h>
#include <stdlib.h>
#include<math.h>




int main() {
	 
	 float longueur = 0 ;
	 float largeur = 0 ;
     
	 
	 printf("veuillez entrer la largeur du rectangle svp!:")	;
	 
	 scanf("%f",&largeur);
	 
	 printf("veuillez entrer la longueur du rectangle svp!:")	;
	 
	 scanf("%f",&longueur);
	 
float circonference(float l , float lg){
	float resultat =0;
	resultat = 2*(l+lg);
	return resultat;
}

printf ("le circonference de ce rectangle est %.4f", circonference(longueur,largeur));	 
	
	
	return 0;
}
