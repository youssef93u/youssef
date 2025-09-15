#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab1[n]; 
    int tab2[n]; 
    for (i = 0; i < n; i++) {
        printf("Entrer l'element du tableau original tab1[%d] :",i);
        scanf("%d", &tab1[i]);
    }
    for (i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
    printf("\nTableau original : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }

    printf("\nTableau copie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");

    return 0;
}
