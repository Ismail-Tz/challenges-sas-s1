#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int j,a,mois;
    printf("\t ---bonne journee---\n");
    printf("veuillez une date par ce ordre (jour.mois.annee): \n");
    scanf("%d%d%d",&j,&mois,&a);
    switch (mois){

    case 1:
    printf("%d-janvier-%d",j,a);
    break;

       case 2:
    printf("%d-fevrier-%d",j,a);
    break;

      case 3:
    printf("%d-mars-%d",j,a);
    break;

      case 4:
    printf("%d-avril-%d",j,a);
    break;

      case 5:
    printf("%d-may-%d",j,a);
    break;

      case 6:
    printf("%d-juin-%d",j,a);
    break;

      case 7:
    printf("%d-juillet-%d",j,a);
    break;

      case 8:
    printf("%d-aout-%d",j,a);
    break;

      case 9:
    printf("%d-septembre-%d",j,a);
    break;

      case 10:
    printf("%d-october-%d",j,a);
    break;

    case 11:
    printf("%d-e-%d",j,a);
    break;

    case 12:
    printf("%d-decembre-%d",j,a);
    break;

    default: printf("ERREUR 404");
    break;


    }
    return 0;
}
