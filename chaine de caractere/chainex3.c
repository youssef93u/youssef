#include <stdio.h>
void concat_manuel(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

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

    concat_manuel(chaine1, chaine2);

    printf("\nRésultat manuelle : %s\n", chaine1);

    return 0;
}
