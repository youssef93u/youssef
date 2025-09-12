#include <stdio.h>

int main() {
    int jours,mois,annee;
    printf("entrer la date jj/MM/AA:");
    scanf("%d/%d/%d",&jours,&mois,&annee);
    printf("%d/",jours);
    switch (mois){
        case 1:
        printf("Janvier");
        break;
        case 2 :
        printf("Fevrier");
        break;
        case 3 :
        printf("Mars");
        break;
        case 4 :
        printf("Avril");
        break;
        case 5 :
        printf("Mai");
        break;
        case 6 :
        printf("Juin");
        break;
        case 7 :
        printf("Juillet");
        break;
        case 8 :
        printf("Aout");
        break;
        case 9 :
        printf("Septembre");
        break;
        case 10 :
        printf("Octobre");
        break;
        case 11 :
        printf("Novembre");
        break;
        case 12 :
        printf("Decembre");
        break;
        default :
        printf(" date incorrecte ");
        
    }
   printf("/%d",annee);


    return 0;
}