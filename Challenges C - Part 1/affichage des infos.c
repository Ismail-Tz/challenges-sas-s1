#include <stdio.h>
#include <stdlib.h>



int main() {
	char nom[25];
	char prenom[25];
	char sexe[20];
	int age=0;
	char numtel[50];
	
	printf("Entrez votre nom svp!\n");
	scanf("%s",&nom);
	printf(" Maintenant entrez votre prenom svp!\n");
	scanf("%s",&prenom);
	printf("Entrez votre age svp !\n");
	scanf("%d",&age);
	printf("Entrez votre numero de telephone  svp!\n");
	scanf("%s",&numtel);
	printf("Entrez votre sexe svp!\n");
	scanf("%s",&sexe);
	
	
	printf ("Votre nom est %s , Et votre prenom est %s , vous avez %d ans , votre numero de telephone est le suivant %s , vous etes %s", nom,prenom,age,numtel,sexe);
	
	
	return 0;
}
