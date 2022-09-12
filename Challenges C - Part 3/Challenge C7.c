#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,nLine,fibo[100]={0,1};

    printf("Enter a number of a line of fibonacci suite:");
    scanf("%d",&nLine);
    for (i=0;i<nLine;i++){
        fibo[i+2] = fibo[i]+fibo[i+1];

    }


    printf("%d", fibo[nLine]);

    return 0;



}
