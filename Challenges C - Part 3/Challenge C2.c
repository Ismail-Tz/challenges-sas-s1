#include <stdio.h>
#include <stdlib.h>

int main(){

    int max, i, j, spacer;

    printf("Enter the size of your pyramid:");
    scanf("%i", &max);

    for(i=0; i<=max;i++){

        for(spacer=0;spacer<=2*(max-i)-1/2;spacer++){
        printf(" ");
        }
        for(j=0; j<(i*2)-1 ;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
