#include<stdio.h>
int main(){

int i, nombre, Somme=0;
printf("entrer le nombre n:");
scanf("%d",&nombre);

for ( i = 0; i <= nombre ; i++)
{
   Somme = Somme + i; /* code */
}
printf("la somme de nombre :%d",Somme);
return 0 ;
}