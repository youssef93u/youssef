#include <stdio.h>
int main() { 
    char mot[]="youcode";
    char motCache[7];     
    int longueur_mot = 0;      
    int teste = 5;
    char lettre;
    int i, j = 0;
    
    while (mot[longueur_mot] != '\0') {
        longueur_mot++;
    }

for (i = 0; i < longueur_mot; i++) {
    motCache[i] = '*';
}
motCache[longueur_mot] = '\0';
while (teste > 0 && !j) {
    printf("Mot: %s\n", motCache);
    printf("Entrez une lettre: ");
    scanf(" %c", &lettre);
}
int correct = 0;
for (i = 0; i < longueur_mot; i++) {
    if (mot[i] == lettre && motCache[i] == '*') {
        motCache[i] = lettre; 
        correct = 1;
    }
}
if (!correct) {
    teste--;
    printf("Mauvaise lettre ! Tentatives restantes: %d\n", teste);
}
j = 1;
for (i = 0; i < longueur_mot; i++) {
    if (mot[i] != motCache[i]) {
        j= 0;
        break;
    }
}
if (j) {
    printf("\nBravo ! Le mot etait: %s\n", mot);
} else {
    printf("\nGame Over ! Le mot etait: %s\n", mot);
}

   return 0;
}