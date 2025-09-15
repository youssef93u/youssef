#include <stdio.h>
#include <string.h>
void inverser_chaine(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char caract;

    while (i < j) {
        caract = str[i];
        str[i] = str[j];
        str[j] = caract;

        i++;
        j--;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    scanf("%s", chaine); 

    inverser_chaine(chaine);

    printf("Chaine inversee : %s\n", chaine);

    return 0;
}