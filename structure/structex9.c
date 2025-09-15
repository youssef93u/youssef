#include <stdio.h>

typedef struct {
    char nom[100];
    float solde;
} Compte;

void deposer(Compte *c, float montant) {
    c->solde += montant;  
}
int main() {
    Compte client;

    printf("Nom du client : ");
    scanf(" %[^\n]", client.nom);

    printf("Solde initial : ");
    scanf("%f", &client.solde);

    float montant;
    printf("Montant a deposer : ");
    scanf("%f", &montant);

    deposer(&client, montant);  

    printf("\n--- Mise a jour ---\n");
    printf("Client : %s\n", client.nom);
    printf("Nouveau solde : %.2f\n", client.solde);

    return 0;
}
