#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char digits[15], invDigits[15],i,j;

    printf("Enter a number:");
    scanf("%s", &digits);
    int len = strlen(digits);
    for (i=len ; i>0 ; i--){
        strcat(invDigits[j],digits[i]);
        j++;
    };

    printf("%s", invDigits);

    return 0;
}
