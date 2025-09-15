#include <stdio.h>

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

int main() {
    Date d;       
    Date *p = &d;  

    printf("Entrez le jour : ");
    scanf("%d", &p->jour);

    printf("Entrez le mois : ");
    scanf("%d", &p->mois);

    printf("Entrez l'annee : ");
    scanf("%d", &p->annee);

    printf("\nDate : %02d/%02d/%d\n", p->jour, p->mois, p->annee);

    return 0;
}
