#include <stdio.h>
#include<math.h>
int main() {
float delt,x1,x2,x0,a,b,c;
printf("les nombres a,b et c :");
scanf("%f %f %f",&a,&b,&c);
delt =pow(b,2)-4*a*c;
if (delt>0)
{
    x1=(-b-sqrt(delt))/2*a;
    x2=(-b+sqrt(delt))/2*a;
    printf("admis deux solutions: %f %f",x1,x2);
}else if(delt==0){
    x0= -b/(2*a);
    printf("un seule solution: %f",x0);
}else{
    printf("pas de solution reele");
}



return 0;
}