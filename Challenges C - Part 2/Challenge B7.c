#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
     float moyenne = 0;
     printf("BONJOUR! \n");
     printf ("veuillez entrer la moyenne de l eleve :");
     scanf("%f",&moyenne);
     
     
     if(moyenne < 10 ){
     	printf("l eleve est recale !");
	 }else if(moyenne >=10 && moyenne < 12){
	 	printf("la mention de cet eleve est : PASSABLE!");
	 }else if (moyenne >=12 && moyenne < 14	 ){
	 	printf("la mention de cet eleve est : ASSEZ BIEN !");
	 }else if (moyenne >=14 && moyenne < 16	 ){
	 	printf("la mention de cet eleve est : BIEN !");
	 }else if ( moyenne >= 16 && moyenne <=20){
	 	printf ("la mention de cet eleve est :  TRES BIEN !");
	 }else {
	 	printf("la moyenne doit etre infurieure ou egal a 20!!!!!!!!!!!!!");
	 }
	
	
	return 0;
}
