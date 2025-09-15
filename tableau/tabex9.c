#include <stdio.h>

int main() {
    int n, i, tmp;
    printf("Entrer le nombre d'element du tableau : ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Entrer les elements du tableau tab[%d]:",i);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n / 2; i++) {
        tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }

    printf("Tableau inverse :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}