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
	 
	printf("la temperature %.3f en degre Celsius est %f:" ,tempF,FtoC(tempF)); 
	 
	
	
	return 0;
}
