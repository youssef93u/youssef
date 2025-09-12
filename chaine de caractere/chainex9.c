#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {          
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';              

    printf("Chaîne sans espaces : %s\n", result);

    return 0;
}