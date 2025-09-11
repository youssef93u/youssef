#include <stdio.h>

int longueur_chaine(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char chaine[100];
    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);
    int len = longueur_chaine(chaine);
    if (chaine[len-1] == '\n') {
        chaine[len-1] = '\0';
        len--;
    }

    printf("La longueur de la chaine est : %d\n", len);

    return 0;
}