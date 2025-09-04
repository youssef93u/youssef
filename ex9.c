// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
float x1,x2,y1,y2,z1,z2, Dist;
printf("entrer les valeurs x1,x2,y1,y2,z1,z2 :");
scanf("%f %f %f %f %f %f",&x1,&y1,&z1,&x2,&y2,&z2);
Dist =sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
printf("%.2f",Dist);
    return 0;
}