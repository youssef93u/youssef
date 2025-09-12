#include <stdio.h>
int main(){

int i,base, exposant;
int resultat=1;

    printf("entrer la base:");
    scanf("%d",&base);
    printf("entrer l_exposant:");
    scanf("%d",&exposant);
if(exposant == 0){
    resultat=1;
} else if(exposant>0){
    for(i=1;i<=exposant;i++){
        resultat=resultat*base;
    }
   }
printf("%d",resultat);

return 0 ;

}