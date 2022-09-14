#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0


bool isPremier(int n){
    int i=2;

    while (i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;

}

int divideBy(int a, int b){
    int div = a/b;

    return div;
}

int main(){

    int n,d;

    printf("enter a number:");
    scanf("%i", &n);
    printf("enter the number you want to divide it by:");
    scanf("%i", &d);


    printf("the result of the division = %i,",divideBy(n,d));
    printf(" and it %s a prime number",isPremier(divideBy(n,d))? "is" : "is not");
    return 0;
}
