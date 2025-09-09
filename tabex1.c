#include <stdio.h>
int main()
{
   int tableau[5] ;
   int i;
   int somme=0;
   for(i=0;i<5;i++){

      printf("entrer la valeur %d:",i);
   
      scanf("%d",&tableau[i]);
   }

   for (i = 0; i < 5; i++)
   {
      printf("tableau[%d] : %d\n",i,tableau[i]);
      somme+=tableau[i];

   }
   printf("la somme est : %d",somme);
   return 0;
}