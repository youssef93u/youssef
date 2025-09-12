#include <stdio.h>
#include<math.h>
int main() {
float V,r;
const int PI=3.14159;
printf("entrer la valeur de r:");
scanf("%f",&r);
V=(4*PI*pow(r,3)/3);
printf("%.2f",V);
    return 0;
}