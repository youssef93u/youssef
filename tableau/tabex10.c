#include <stdio.h>

int main() {
    int n, i, element;
    int trouve = 0; 
    printf("Entrez les nombres d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Entrer l'element du tableau tab[%d]:",i);
        scanf("%d", &tab[i]);
    }
    printf("Entrez l'element à rechercher : ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (tab[i] == element) {
            printf("Element trouve à la position %d (indice %d)\n", i+1, i);
            trouve = 1;
            break; 
        }
    }

    if (!trouve) {
        printf("Element non trouve dans le tableau.\n");
    }

    return 0;
}
