#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, sum;
    printf("Challenge 4\n");

    printf("Enter a value:");
    scanf("%i", &a);

    printf("Enter another value:");
    scanf("%i", &b);

    sum = a+b;

    if(a==b){
        printf("%i", sum*3);
    }else{
        printf("%i", sum);
    }
    return 0;

}
