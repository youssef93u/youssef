#include <stdio.h>
int est_pair(int nombre){
    return nombre%2==0;
}
int main(){
int n;
printf("entrer le nombre n :");
   scanf("%d",&n);

if(est_pair(n))
  printf("%d pair \n",n);
else
  printf("%d impair \n",n);
   return 0;

}
