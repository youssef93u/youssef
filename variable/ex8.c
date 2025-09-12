#include <stdio.h>
#include <math.h>
int main() {
float a,b,c, Moygeo;
printf("entrer les nombres a,b et c:");
scanf("%f%f%f",&a,&b,&c);
Moygeo=cbrt(a*b*c);
printf("%f",Moygeo);
    return 0;
}