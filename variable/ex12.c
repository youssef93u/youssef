#include <stdio.h>

int main() {
    int n1, n2 = 0, reste;

    printf("Entrez un nombre à quatre chiffres : ");
    scanf("%d", &n1);

    // Boucle pour inverser les chiffres du nombre
    while (n1 != 0) {
        reste = n1 % 10; // Extraire le dernier chiffre
        n2 = n2 * 10 + reste; // Construire le nombre inversé
        n1 /= 10; // Supprimer le dernier chiffre du nombre original
    }

    printf("Le nombre inversé est : %d\n", n2);

    return 0;
}