#include <stdio.h>

typedef struct {
    char nom[100];
    float prix;
    int quantite;
} Produit;

int main() {
    int n, i;

    printf("Combien de produits voulez-vous entrer ? ");
    scanf("%d", &n);

    Produit produits[n];  

    for(i = 0; i < n; i++) {
        printf("\n--- Produit %d ---\n", i+1);

        printf("Nom : ");
        scanf(" %[^\n]", produits[i].nom);

        printf("Prix : ");
        scanf("%f", &produits[i].prix);

        printf("Quantite : ");
        scanf("%d", &produits[i].quantite);
    }

    printf("\n===== Liste des produits =====\n");
    for(i = 0; i < n; i++) {
        printf("Produit %d : %s | Prix : %.2f Dh | Quantite : %d pieces\n",
               i+1, produits[i].nom, produits[i].prix, produits[i].quantite);
    }

    return 0;
}
