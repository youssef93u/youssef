#include <stdio.h>

int main() {
    int nombre, i;
    int minimum;        
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &nombre);
    int tableau[nombre];
    for (i = 0; i < nombre ; i++) {
        printf("Entrez tableau[%d] : ", i);
        scanf("%d", &tableau[i]);
    }
    minimum = tableau[0];

    for (i = 1; i < nombre ; i++) {
        if (tableau[i] < minimum) {
            minimum = tableau[i];
        }
    }

    printf("Le minimum est : %d\n", minimum);

    return 0;
}