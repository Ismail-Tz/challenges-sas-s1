#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char digits[15]={ NULL }, invDigits[15] = { NULL };
    int i,j=0;

    printf("Enter a number:");
    scanf("%s", &digits);

    int len = strlen(digits); //strlen() returns the size of the array inside ()


    for (i=len-1 ; i>=0 ; i--){
        invDigits[j] = digits[i];
        j++;
    };


    printf("%s", invDigits);

    return 0;
}
