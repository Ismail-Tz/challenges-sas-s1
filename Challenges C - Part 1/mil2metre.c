#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	 float metre=0;
	 float mile = 0;
	 
	 printf("Veuillez entrer la distance en mile svp :");
	 scanf("%f",&mile);
	 
float Mile2M(float mile){
	float r=0;
	r=mile*1.609;
	metre = r*1000;
	
	return metre;
}

	 
	printf("la distance %f mile en metre est %f metres " ,mile,Mile2M(mile)); 
	 
	
	
	return 0;
}
