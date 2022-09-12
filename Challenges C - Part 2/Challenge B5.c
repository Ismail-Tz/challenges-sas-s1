#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c;
    double delta;

    printf("Challenge 5\n");
    printf("Solve an equation in the form of: ax² + bx + c");

    printf("enter the value of a:");
    scanf("%i", &a);

    printf("enter the value of b:");
    scanf("%i", &b);

    printf("enter the value of c:");
    scanf("%i", &c);

    delta = b*b - 4*a*c;

    if (delta < 0){
        printf("the equation doesn\'t have a real solution");
    }else if (delta == 0){
        double oneSol = -b/(2*a);
        printf("the equation has one solution: %f", oneSol );
    }else{
        printf("the equation has 2 solutions: %f and %f",(-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
    }


    return 0;

}
