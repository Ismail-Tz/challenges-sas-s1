#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	 float tempC=0;
	 float tempF=0;
	 
	 printf("Veuillez entrer la température en Fahrenheit svp :");
	 scanf("%f",&tempF);
	 
float FtoC(float tempF){
	tempC=(tempF-32)/1.8;
	return tempC;
}
//tempC=((tempF-32)/(1.8));
	 
	printf("la temperature %.3f en degre Celsius est :\n%f\t" ,tempF,FtoC(tempF)); 
	
	 if (FtoC(tempF)<10 ){
	 	printf ("il fait tres froid");
	 }
	 else if((FtoC(tempF)>10) && (FtoC(tempF)<25)){
	 	printf ("il fait froid");
	 
	 }
	 else if(FtoC(tempF)>25 && FtoC(tempF)<35 ){
	 	  printf ("il fait chaud ");
	 }
	 else{
	 	printf ("il fait tres chaud ");
	 }
	 	
	 
	
	
	return 0;
}
