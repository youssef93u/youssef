#include <stdio.h>
int main(){
int i,nombre, reste, inverse_nombre=0;
printf("entrer le nombre :");
scanf("%d",&nombre);
while(nombre!=0){
        reste = nombre % 10;

        inverse_nombre = inverse_nombre*10 + reste;

        nombre = nombre/10;
}
printf("le nombre inverse: %d\n",inverse_nombre);
return 0 ;

}