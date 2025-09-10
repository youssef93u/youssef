#include <stdio.h>

int Min(int a, int b) {
    if(a<b){
    return a; 
    }else{
    return b;}
}
int main() {
    int x, y, resultat;
    printf("Entrez le premier nombre : ");
    scanf("%d", &x);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);
    resultat = Min(x, y);
    printf("Le max %d et %d : %d\n",x,y,resultat);
    return 0;
}