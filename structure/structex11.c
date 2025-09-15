#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Etudiant {
    char nom[50];
    float note;
    struct Etudiant *suivant; 
} Etudiant;

Etudiant* ajouterEtudiant(Etudiant *liste, const char *nom, float note) {
    
    Etudiant *nouveau = (Etudiant*) malloc(sizeof(Etudiant));
    if (nouveau == NULL) {
        printf("Erreur d'allocation memoire !\n");
        exit(1);
    }

    
    strcpy(nouveau->nom, nom);
    nouveau->note = note;

    nouveau->suivant = liste;

    return nouveau;
}

void afficherListe(Etudiant *liste) {
    Etudiant *courant = liste;
    printf("\n===== Liste des Etudiants =====\n");
    while (courant != NULL) {
        printf("Nom: %s | Note: %.2f\n", courant->nom, courant->note);
        courant = courant->suivant;
    }
}

int main() {
    Etudiant *liste = NULL; 

    liste = ajouterEtudiant(liste, "nom1", 18.5);
    liste = ajouterEtudiant(liste, "nom2", 15.0);
    liste = ajouterEtudiant(liste, "nom3", 13.0);

    afficherListe(liste);

    Etudiant *tmp;
    while (liste != NULL) {
        tmp = liste;
        liste = liste->suivant;
        free(tmp);
    }

    return 0;
}
