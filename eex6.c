#include<stdio.h>
int main(){
    float nombre;
    printf("entrer le nombre :");
    scanf("%f",&nombre);
    if (nombre>0)
    {
       printf("le nombre est positif"); /* code */
    }else if (nombre==0)
    {
       printf("le nombre est nul"); /* code */
    }else{
        printf("le nombre est negatif");
    }
   
    
}