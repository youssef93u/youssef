#include <stdio.h>

int main() {
    int nombre, i;
    int maximum;        
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &nombre);
 int tableau[nombre];  
    for (i = 0; i < nombre ; i++) {
        printf("Entrez tableau[%d] : ", i);
        scanf("%d", &tableau[i]);
    }
    maximum = tableau[0];

    for (i = 1; i < nombre ; i++) {
        if (tableau[i] > maximum) {
            maximum = tableau[i];
        }
    }

    printf("Le maximum est : %d\n", maximum);

    return 0;
}