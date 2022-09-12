#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, i;

    printf("Enter a number:");
    scanf("%i", &num);

    for(i=1; i<11 ; i++){
        printf("%i x %i = %i\n", num, i, num*i);
    }

    return 0;
}
