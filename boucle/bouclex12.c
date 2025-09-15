#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    
    for (i = 0; i < n; i++) {
        printf("Entrer l'element du tableau tab[%d] :",i);
        scanf("%d", &tab[i]);
    }

    printf("Elements pairs du tableau : ");
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 == 0) { 
            printf("%d ", tab[i]);
        }
    }
    printf("\n");

    return 0;
}