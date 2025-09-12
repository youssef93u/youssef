#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ETUDIANTS 100
#define MAX_COURS 50

typedef struct {
    int id;
    char nom[50];
    char prenom[50];
    int age;
    float moyenne;
} Etudiant;

typedef struct {
    char code[10];
    char nom[50];
    int credits;
    float note;
} Cours;

Etudiant etudiants[MAX_ETUDIANTS];
int nbEtudiants = 0;

Cours cours[MAX_COURS];
int nbCours = 0;

void ajouterEtudiant() {
    if (nbEtudiants >= MAX_ETUDIANTS) {
        printf("Capacite maximale atteinte.\n");
        return;
    }

    Etudiant e;
    printf("ID: ");
    scanf("%d", &e.id);

    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].id == e.id) {
            printf("ID deja utilise. Operation annulee.\n");
            return;
        }
    }

    printf("Nom: ");
    scanf(" %[^\n]", e.nom);
    printf("Prenom: ");
    scanf(" %[^\n]", e.prenom);
    printf("Age: ");
    scanf("%d", &e.age);
    printf("Moyenne: ");
    scanf("%f", &e.moyenne);

    etudiants[nbEtudiants++] = e;
    printf("Etudiant ajoute avec succes !\n");
}

void afficherEtudiants() {
    if (nbEtudiants == 0) {
        printf("Aucun etudiant enregistre.\n");
        return;
    }
    printf("\nListe des etudiants:\n");
    for (int i = 0; i < nbEtudiants; i++) {
        printf("ID: %d | Nom: %s | Prenom: %s | Age: %d | Moyenne: %.2f\n",
               etudiants[i].id, etudiants[i].nom, etudiants[i].prenom,
               etudiants[i].age, etudiants[i].moyenne);
    }
}

void rechercherEtudiant() {
    if (nbEtudiants == 0) {
        printf("Aucun etudiant enregistre.\n");
        return;
    }

    int id;
    printf("Entrez l'ID de l'etudiant: ");
    scanf("%d", &id);

    for (int i = 0; i < nbEtudiants; i++) {
        if (etudiants[i].id == id) {
            printf("ID: %d | Nom: %s | Prenom: %s | Age: %d | Moyenne: %.2f\n",
                   etudiants[i].id, etudiants[i].nom, etudiants[i].prenom,
                   etudiants[i].age, etudiants[i].moyenne);
            return;
        }
    }
    printf("Etudiant non trouve.\n");
}

void ajouterCours() {
    if (nbCours >= MAX_COURS) {
        printf("Capacite maximale atteinte.\n");
        return;
    }

    Cours c;
    printf("Code du cours: ");
    scanf("%s", c.code);

    for (int i = 0; i < nbCours; i++) {
        if (strcmp(cours[i].code, c.code) == 0) {
            printf("Code deja utilise. Operation annulee.\n");
            return;
        }
    }

    printf("Nom du cours: ");
    scanf(" %[^\n]", c.nom);
    printf("Credits: ");
    scanf("%d", &c.credits);
    printf("Note: ");
    scanf("%f", &c.note);

    cours[nbCours++] = c;
    printf("Cours ajoute avec succes !\n");
}

void afficherCours() {
    if (nbCours == 0) {
        printf("Aucun cours enregistre.\n");
        return;
    }
    printf("\nListe des cours:\n");
    for (int i = 0; i < nbCours; i++) {
        printf("Code: %s | Nom: %s | Credits: %d | Note: %.2f\n",
               cours[i].code, cours[i].nom, cours[i].credits, cours[i].note);
    }
}

void modifierNote() {
    if (nbCours == 0) {
        printf("Aucun cours enregistre.\n");
        return;
    }

    char code[10];
    printf("Entrez le code du cours: ");
    scanf("%s", code);

    for (int i = 0; i < nbCours; i++) {
        if (strcmp(cours[i].code, code) == 0) {
            printf("Note actuelle: %.2f\n", cours[i].note);
            printf("Nouvelle note: ");
            scanf("%f", &cours[i].note);
            printf("Note mise a jour.\n");
            return;
        }
    }
    printf("Cours non trouve.\n");
}

int main() {
    int choix;
    do {
        printf("\n=== Menu Gestion Universitaire ===\n");
        printf("1. Ajouter un etudiant\n");
        printf("2. Ajouter un cours\n");
        printf("3. Afficher les etudiants\n");
        printf("4. Afficher les cours\n");
        printf("5. Rechercher un etudiant\n");
        printf("6. Modifier la note d'un cours\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterEtudiant(); break;
            case 2: ajouterCours(); break;
            case 3: afficherEtudiants(); break;
            case 4: afficherCours(); break;
            case 5: rechercherEtudiant(); break;
            case 6: modifierNote(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide. Reessayez.\n");
        }

    } while (choix != 0);

    return 0;
}
