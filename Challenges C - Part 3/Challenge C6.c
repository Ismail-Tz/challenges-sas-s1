#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,p,i,dividers=0;

    printf("Enter a max value:");
    scanf("%i",&n);

    for (p=2; p<=n ; p++){

        for(i=1; i<=p ; i++){

            if(p%i==0){
                dividers++;
            }
        }

        if (dividers==2){
            printf("%d est premier\n", p);
        }
        dividers = 0;

    }


    return 0;
}
