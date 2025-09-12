#include <stdio.h>

int main() {
    int n, i, facteur;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);
    int tableau[n], resultat[n];
    
    for (i = 0; i < n; i++) {
        printf("Entrez tableau[%d] : ", i);
        scanf("%d", &tableau[i]);
    }
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);
    
    for (i = 0; i < n; i++) {
        resultat[i] = tableau[i] * facteur;
    }
    printf("\nTableau apres multiplication :\n");
    for (i = 0; i < n; i++) {
        printf("resultat[%d] = %d\n", i, resultat[i]);
    }

    return 0;
}