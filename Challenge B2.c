#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    printf("Odd or Even\n");
    printf("Enter a number:");
    scanf("%i",&num);

    if(num%2==0){

        printf("%i is an even number.", num);

    }else{

        printf("%i is an odd number.", num);

    }

    return 0;

}
