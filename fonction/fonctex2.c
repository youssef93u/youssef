#include <stdio.h>
int produit(int a,int b){
return a * b;
}
int main(){
     int x, y;
printf("entre la valeur de x :");
scanf("%d",&x);
printf("entre la valeur de y :");
scanf("%d",&y);
produit(x,y);
printf("le produit :%d ",produit(x,y) );


return 0;
}
