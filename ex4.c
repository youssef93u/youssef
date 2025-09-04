// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
float a,b;
char opr;
printf("entrer les nombres a,b:");
scanf("%f %c %f",&a,&opr,&b);
switch(opr){
    case '+' :
    a+b;
    printf("%f",a+b);
    break;
     case '-' :
    a-b;
    printf("%f",a-b);
    break;
     case '*' :
    a*b;
    printf("%f",a*b);
    break;
     case '/' :
    a/b;
    printf("%f",a/b);
    break;
    default :
    printf("operation invalide");

}
    return 0;
}