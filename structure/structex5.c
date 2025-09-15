typedef struct {
    char titre[100];
    char auteur[100];
    int annee;
} Livre;
#include <stdio.h>

Livre crLivre() {
    Livre l;
    printf("Titre du livre: ");
    scanf(" %[^\n]", l.titre);   
    printf("Auteur du livre: ");
    scanf(" %[^\n]", l.auteur);
    printf("Annee de publication: ");
    scanf("%d", &l.annee);
    return l;
}
int main() {
    Livre monLivre = crLivre();  

    printf("\nInformations du livre :\n");
    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}


