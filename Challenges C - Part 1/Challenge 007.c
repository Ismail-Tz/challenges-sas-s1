#include <stdio.h>
#include <stdlib.h>

int main() {

int a,b;

printf("Enter first value:");
scanf("%d", &a);
printf("Enter second value:");
scanf("%d", &b);

double aPlusb = a + b;
double aMinusb = a - b;
double aTimesb = a*b;
double aDivb =(float) a/ (float)b;
int aQuob = a%b;

printf("a+b= %.2lf\n", aPlusb);
printf("a-b= %.2lf\n", aMinusb);
printf("a*b= %.2lf\n", aTimesb);
printf("a/b= %.2lf\n", aDivb);
printf("a%b= %i", aQuob);


}
