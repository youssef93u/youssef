#include<stdio.h>
int main() {
    int annee,mois,jours,heure,munite,seconde;
    printf("entre l annee :");
    scanf("%d",&annee);
mois=annee*12;
jours=annee*365;
heure=annee*365*24;
munite=annee*365*24*60;
seconde=annee*365*24*360;

printf("mois:%d\n jours:%d\n heure:%d\n munite:%d\n seconde:%d",mois,jours,heure,munite,seconde);
    return 0;
}