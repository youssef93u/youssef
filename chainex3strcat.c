#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[200];
    char chaine2[100];

    printf("Entrez la première chaine : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaine : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    int i = 0;
    while (chaine1[i] != '\0') { 
        if (chaine1[i] == '\n') chaine1[i] = '\0';
        i++;
    }
    i = 0;
    while (chaine2[i] != '\0') {
        if (chaine2[i] == '\n') chaine2[i] = '\0';
        i++;
    }

    strcat(chaine1, chaine2);

    printf("\nRésultat strcat : %s\n", chaine1);

    return 0;
}