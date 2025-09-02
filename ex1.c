#include <stdio.h>

int main() {
 char nom[12], prenom[12], email[30],sexe[10];
 int age;
 printf("entrer le nom :");
 scanf("%s",&nom);
 printf("entrer prenom:\n");
 scanf("%s",&prenom);
 printf("entrer le sexe:\n");
 scanf("%s",&sexe);
 printf("entrer l'adress email:\n");
 scanf("%s",&email);
  printf("entrer l'age:\n");
 scanf("%d",&age);
 printf(" nom %s et prenom %s sexe %s email %s age %d", nom, prenom, email, sexe, age);

    return 0;
}