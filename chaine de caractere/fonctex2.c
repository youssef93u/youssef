#include <stdio.h>

int produit(int a, int b) {
    return a * b; 
}
int main() {
    int x, y, resultat;
    printf("Entrez le premier nombre : ");
    scanf("%d", &x);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);
    resultat = produit(x, y);
    printf("La produit de %d et %d est : %d\n", x, y, resultat);

    return 0;
}
