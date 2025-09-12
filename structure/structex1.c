#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[30];
    char prenom[30];
    int age;
};

int main() {

    struct Personne employe;

    strcpy(employe.nom, "mouad");     
    
    strcpy(employe.prenom, "youssef");  
    employe.age = 22;

    printf("=== Informations Employé ===\n");
    printf("Nom    : %s\n", employe.nom);
    printf("Prénom : %s\n", employe.prenom);
    printf("Âge    : %d ans\n", employe.age);

    return 0;
}
