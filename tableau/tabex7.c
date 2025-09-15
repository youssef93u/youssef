#include <stdio.h>

int main() {
    int n, i, j, tmp;
    printf("Entrer le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    
    
    for (i = 0; i < n; i++) {
        printf("Entrez l'element du tableau tab[%d]:",i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
    printf("Tableau trie en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}