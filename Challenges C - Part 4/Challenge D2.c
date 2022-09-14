#include <stdio.h>
#include <stdlib.h>

//procedure
int echange(int a, int b){

    int oldA = a;
    int oldB = b;

    a = oldB;
    b = oldA;

    printf("initial a = %i and initial b = %i",oldA, oldB);
    printf("\nnew a = %i and new b = %i",a,b);

    return 0;
}

int main(){

    echange(7,8);

    return 0;
}
