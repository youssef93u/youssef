#include <stdio.h>

int main() {
int T;
printf("entre la température T:");
scanf("%d",&T);
if(T<0){
    printf("etat d eau solide");
}else if(T>=0 && T<100){
    printf("etat d eau liquide");
}else{
    printf("etat d eau gaz");
}

    return 0;
}