#include<stdio.h>
int main(){
int i,nombre,P;
printf("entrer le nombre:");
scanf("%d",&nombre);
for ( i = 0; i <=10; i++)
{
    P=nombre*i;
    printf("%d=%d*%d\n",P,nombre,i);
}


return 0;

}