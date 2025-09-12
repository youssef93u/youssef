#include <stdio.h>
long long fibonacci(int n) {
    if (n == 0) return 0;   
    if (n == 1) return 1;  
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int nombre;
    printf("Entrez un entier nombre : ");
    scanf("%d", &nombre);

    printf("F(%d) = %lld\n", nombre, fibonacci(nombre));
    return 0;
}