#include <stdio.h>

int main() {
    int nombre, i, somme = 0;
    printf("Entrer la valeur de n: ");
    scanf("%d", &nombre);

    int tableau[nombre]; 
    for (i = 0; i < nombre; i++) {
        printf("Entrer la valeur %d: ", i);
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < nombre; i++) {
        printf("tableau[%d] : %d\n", i, tableau[i]);
        somme += tableau[i];
    }

    printf("La somme est : %d\n", somme);

    return 0;
}