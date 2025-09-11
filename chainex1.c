#include <stdio.h>

int main() {
    char chaine[50]; 

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin); 
    printf("Vous avez saisi : %s", chaine);

    return 0;
}