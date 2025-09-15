#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100], souschaine[50];

    // saisie
    printf("Entrez la chaine principale : ");
    fgets(chaine, sizeof(chaine), stdin);

    printf("Entrez la sous-chaine : ");
    fgets(souschaine, sizeof(souschaine), stdin);

    chaine[strcspn(chaine, "\n")] = '\0';
    souschaine[strcspn(souschaine, "\n")] = '\0';

    if(strstr(chaine, souschaine) != NULL) {
        printf("La sous-chaine existe dans la chaîne principale.\n");
    } else {
        printf("la sous-chaine n'existe pas.\n");
    }

    return 0;
}