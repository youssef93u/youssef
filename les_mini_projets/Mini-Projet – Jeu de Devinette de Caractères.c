#include <stdio.h>
#include <string.h>

int main() {
    char mot[] = "hello";
    int longueur = strlen(mot);

    char motCache[longueur + 1];  
    int tentatives = 6;      
    int tentativesRestantes = tentatives;
    int lettres_Trouvees = 0;
    char lettre;
    int i;

    for (i = 0; i < longueur; i++) {
        motCache[i] = '*';
    }
    motCache[longueur] = '\0'; 

    printf("=== Jeu du Mot Cache ===\n");
    printf("Mot a deviner : %s\n", motCache);

    while (tentativesRestantes > 0 && lettres_Trouvees < longueur) {
        printf("\nentrer une lettre : ");
        scanf(" %c", &lettre); 
        
        int bonneReponse = 0;

        for (i = 0; i < longueur; i++) {
            if (mot[i] == lettre && motCache[i] == '*') {
                motCache[i] = lettre;
                lettres_Trouvees++;
                bonneReponse = 1;
            }
        }

        if (bonneReponse) {
            printf("Bien joue ! Mot actuel : %s\n", motCache);
        } else {
            tentativesRestantes--;
            printf("Mauvaise reponse ! Tentatives restantes : %d\n", tentativesRestantes);
        }
    }

    if (lettres_Trouvees == longueur) {
        printf("\nBravo ! Vous avez trouve le mot : %s\n", mot);
    } else {
        printf("\nGame Over ! Le mot etait : %s\n", mot);
    }

    return 0;
}