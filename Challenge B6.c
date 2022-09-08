#include <stdio.h>
#include <stdlib.h>

int main(){

    char mot[50], motInv[50];

    printf("Palindrome or not\n");
    printf("Enter a word:");
    scanf("%s",&mot);

    strcpy(motInv,mot);
    strrev(motInv);
    printf("The reversed version is: %s\n", motInv);

    if( strcmp(mot,motInv) == 0){
        printf("So %s is a Palindrome",mot);
    } else {
        printf("So %s is not a Palindrome",mot);
    }


    return 0;

}
