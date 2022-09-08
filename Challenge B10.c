#include <stdio.h>
#include <stdlib.h>

//we use srand to make rand() generate a new random
//number each time we start the program or else it
//will give us the first generated random number
//every time we run the program
//srand (time(NULL));

int main(){

    char jours[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int randomNum = rand()%8;
    printf("%d", randomNum);
    printf("Your Lucky day is %s",jours[randomNum]);



    return 0;

}
