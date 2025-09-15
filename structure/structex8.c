#include <stdio.h>
#define PI 3.14

typedef struct {
    float rayon;
} Cercle;

void calculerAire(Cercle c) {
    float aire = PI * c.rayon * c.rayon;
    printf("Aire du cercle de rayon %.2f = %.2f\n", c.rayon, aire);
}
int main() {
    Cercle c;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &c.rayon);

    calculerAire(c);

    return 0;
}
