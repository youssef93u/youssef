#include <stdio.h>

int main() {
float a,b,c, Moy;
printf("entrer les nombres a,b et c:");
scanf("%f%f%f",&a,&b,&c);
Moy=(a*2+b*3+c*5)/(2+3+5);
printf("%.2f",Moy);
    return 0;
}