#include <stdio.h>
int maximum(int a,int b){
    if(a>b)
return a;
else
    return b;
}
int main(){
     int x, y;
printf("entre la valeur de x :");
scanf("%d",&x);
printf("entre la valeur de y :");
scanf("%d",&y);
maximum(x,y);
printf("le produit :%d ",maximum(x,y) );


return 0;
}
