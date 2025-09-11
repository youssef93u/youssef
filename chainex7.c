#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char chaine[200];

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    int len = strlen(chaine);
    if (chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    for (int i = 0; chaine[i] != '\0'; i++) {
        chaine[i] = toupper(chaine[i]);
    }

    printf("En majuscules : %s\n", chaine);

    return 0;
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char chaine[200];

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    int len = strlen(chaine);
    if (chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = chaine[i] - 'a' + 'A';
        }
    }

    printf("En majuscules manuellement : %s\n", chaine);

    return 0;
}*/
