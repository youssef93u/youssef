#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100], chaine2[100];

    printf("Entrez la première chaine : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaine : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    int i = 0;
    while (chaine1[i] != '\0') { if (chaine1[i] == '\n') chaine1[i] = '\0'; i++; }
    i = 0;
    while (chaine2[i] != '\0') { if (chaine2[i] == '\n') chaine2[i] = '\0'; i++; }

    if (strcmp(chaine1, chaine2) == 0)
        printf("Les chaines sont identiques \n");
    else
        printf("Les chaines ne sont identiques \n");

    return 0;
}