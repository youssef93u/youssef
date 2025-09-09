#include<stdio.h>
int main() {
    int i, nombre, Somme;
    printf("entrer le nombre :");
    scanf("%d",&nombre);
    Somme = 0;
    i=1;
    while(i<=nombre){
       Somme = Somme + i;
         i++;
         
    }
     printf("%d",Somme);






return 0;

}