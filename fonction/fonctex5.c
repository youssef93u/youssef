#include <stdio.h>
long long factorielle(int n){
if(n==0){
    return 1;
}else{
    return n*factorielle(n-1);
}
}
int main() {
    int nombre;
    long long resultat;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("La factorielle n'est pas definie\n");
    } else {
        resultat = factorielle(nombre);
        printf("La factorielle de %d est : %lld\n", nombre, resultat);
    }

    return 0;
}
    