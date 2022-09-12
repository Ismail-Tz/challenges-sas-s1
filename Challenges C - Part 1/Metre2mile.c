#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	 float metre=0;
	 
	 printf("Veuillez entrer la distance en metre svp :");
	 scanf("%f",&metre);
	 
float Metre2M(float metre){
	float r=0,mile =0;
	r=metre/1000;
	mile=r*1.609;
	
	return mile;
}

	 
	printf("la distance %.3f metre en mile est %f mile " ,metre,Metre2M(metre)); 
	 
	
	
	return 0;
}
