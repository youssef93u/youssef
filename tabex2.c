#include <stdio.h>

int main() {
    int i, n;
    printf("Entrez le nombre d'elements n: ");
    scanf("%d", &n);
    int tableau[n]; 
    for (i = 0; i < n; i++) {
        printf("Entrez tableau[%d] : ", i);
        scanf("%d", &tableau[i]);
    }
    printf("\nContenu du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("tableau[%d] = %d\n", i, tableau[i]);
    }

    return 0;
}
