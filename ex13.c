#include <stdio.h>
int main(){
int x;
    // Demander un entier à l'utilisateur
    printf("Entrez un entier décimal : ");
    scanf("%d", &x);

    // Afficher la représentation décimale
    printf("Représentation décimale : %d\n", x);

    // Afficher la représentation hexadécimale
    // Le format %x affiche en hexadécimal en minuscules
    printf("Représentation hexadécimale : %x\n", x);

    // Afficher la représentation binaire
    printf("Représentation octet : %ok\n", x);
    

    return 0;
}