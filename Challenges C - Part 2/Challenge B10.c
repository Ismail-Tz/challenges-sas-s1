#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//we use srand() and time() to make rand() generate a new random
//number each time we start the program or else it
//will give us the first generated random number
//every time we run the program


int main(){

    srand (time(NULL));

    char jours[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    printf("Your Lucky day is %s",jours[rand()%8]);



    return 0;

}
