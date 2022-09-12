#include <stdio.h>
#include <stdlib.h>
#include<math.h>




int main() {
	
	float a=0,b=0,c=0,d=0;
	 	 
	 printf("enter the first number a:");
	 scanf("%f",&a);
	 printf("enter the first number b:");
	 scanf("%f",&b);
	 printf("enter the first number c:");
	 scanf("%f",&c);
	 printf("enter the first number d:");
	 scanf("%f",&d);
	 
	 
	 float somme = a+b+c+d;
	 float moyenne = somme/4;
	 
	 printf("-------------------------la sommme--------------------------\n");
	 
	 printf ("la somme est %.1f\t+\t%.1f\t+\t%.1f\t+\t%.1f\t=\t%.1f\n", a,b,c,d,somme);
	 
	 printf("-------------------------la moyenne--------------------------\n");
	 
	 printf ("la moyenne est %.1f\t+\t%.1f\t+\t%.1f\t+\t%.1f\t / 4 \t=\t%f", a,b,c,d,moyenne);
	 



	
	
	return 0;
}
