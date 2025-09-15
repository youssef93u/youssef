#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[50];
    float salaire;
} Employe;

int main() {
    int n, i;

    printf("Combien d'employes voulez-vous saisir ? ");
    scanf("%d", &n);

    Employe *employes = (Employe*) malloc(n * sizeof(Employe));

    if (employes == NULL) {
        printf("Erreur d'allocation memoire !\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\n--- Employe %d ---\n", i+1);
        printf("Nom : ");
        scanf("%s", employes[i].nom);
        printf("Salaire : ");
        scanf("%f", &employes[i].salaire);
    }

    printf("\n===== Liste des Employes =====\n");
    for (i = 0; i < n; i++) {
        printf("Employe %d : %s | Salaire = %.2f\n", i+1, employes[i].nom, employes[i].salaire);
    }

    free(employes);

    return 0;
}