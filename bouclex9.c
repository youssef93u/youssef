#include<stdio.h>
int main(){
    int nombre, compteur=0;
    printf("entrer le nombre:");
    scanf("%d",&nombre);
    if(nombre == 0){
           compteur = 1;
    }else {
        while (nombre > 0){
nombre=nombre/10;
compteur++;

    }
}
    printf("affichage des chiffres de nombre n: %d\n",compteur);



    return 0 ;
}