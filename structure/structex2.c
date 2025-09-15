#include <stdio.h>
#include <string.h>

#define N_note 3   
struct Etudiant {
    char nom[30];
    char prenom[30];
    int notes[N_note];
};

int main() {
    struct Etudiant e; 
    int i;

    // Saisie
    printf("Nom : ");
    scanf("%s", e.nom);  

    printf("Prenom : ");
    scanf("%s", e.prenom);

    printf("Entrez %d notes :\n", N_note);
    for(i = 0; i < N_note; i++) {
        printf("Note %d : ", i+1);
        scanf("%d", &e.notes[i]);
    }

    // Affichage
    printf("\n=== Fiche Étudiant ===\n");
    printf("Nom    : %s\n", e.nom);
    printf("Prenom : %s\n", e.prenom);
    printf("Notes  : ");
    for(i = 0; i < N_note; i++) {
        printf("\n%d\n ", e.notes[i]);
    }
    printf("\n");

    return 0;
}