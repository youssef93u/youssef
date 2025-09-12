#include <stdio.h>

int Max(int a, int b) {
    if(a>b){
    return a; 
    }else{
    return b;}
}
int main() {
    int x, y, resultat,max;
    printf("Entrez le premier nombre : ");
    scanf("%d", &x);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);
    resultat = Max(x, y);
    printf("Le max %d et %d : %d\n",x,y,resultat);
    return 0;
}