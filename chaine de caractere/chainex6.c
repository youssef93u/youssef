#include <stdio.h>
#include <string.h>

int main() {
    char chaine[200];
    char caractere;
    int compteur = 0;
    
    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    int len = strlen(chaine);
    if (chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }
    printf("Entrez le caractere a rechercher : ");
    scanf("%c", &caractere);

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere) {
            compteur++;
        }
    }

    printf("Le caractere '%c' apparait %d fois.\n", caractere, compteur);

    return 0;
}