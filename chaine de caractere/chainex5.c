#include <stdio.h>
#include <string.h>

void inverser(char str[]) {
    int debut = 0;
    int fin = strlen(str) - 1;

    while (debut < fin) {
    
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;

        debut++;
        fin--;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    int len = strlen(chaine);
    if (chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    inverser(chaine);

    printf("Chaine inversée : %s\n", chaine);

    return 0;
}