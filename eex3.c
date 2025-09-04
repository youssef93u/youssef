#include <stdio.h>
int main() {
int a,b,S;
printf("entrer a et b :");
scanf("%d%d",&a,&b);
if(a==b){
    S=(a+b)*3;
} else {
    S=a+b;
}
printf("%d",S);
return 0;
}