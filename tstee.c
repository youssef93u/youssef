#include <stdio.h>
#include<string.h>

int main() {
    char tab[10];
    int i,n,tmp;
    printf("entrer le nombre n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
   printf("Entrez les valeurs tab[%d] :%d ",i);
   scanf("%d",tab[i]);
    }
    return 0;
}