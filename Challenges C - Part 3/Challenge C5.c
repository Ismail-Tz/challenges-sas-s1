#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char digits[15], invDigits[15];
    int i,j=0;

    printf("Enter a number:");
    scanf("%s", &digits);

    int len = strlen(digits);
    for (i=len-1 ; i>=0 ; i--){
        invDigits[j] = digits[i];
        printf("%s",invDigits);
        j++;
    };

    printf("%s", invDigits);

    return 0;
}
