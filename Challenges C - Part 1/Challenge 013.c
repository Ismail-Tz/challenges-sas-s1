#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int x;
    printf("Program 013: From Decimal to Octal and Hexadecimal");
    printf("Enter a decimal value:");
    scanf("%i",&x);

    int hexaX[1000],octalX[1000];
    int quo,remainder;


    //from decimal to hexadecimal using sprintf and %x
    //sprintf reformats data into a string of chars
    sprintf(hexaX, "%x", x);
    sprintf(octalX, "%o", x);


    printf("The entered value in hexadecimal: %s\n",hexaX);
    printf("The entered value in octal: %s\n",octalX);
}
