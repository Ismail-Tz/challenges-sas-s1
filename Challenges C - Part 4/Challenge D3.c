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


int main(){

    printf("%d",isPremier(15));
    return 0;
}
