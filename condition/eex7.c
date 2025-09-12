#include<stdio.h>
int main(){
    char caractere;
    printf("entrer la caractere:");
    scanf("%c",&caractere);
    if (caractere>=65 && caractere<=90)
    {
      printf("lettre majuscule ");  /* code */
    }else {
        printf("lettre miniscule");
    }
     
    
   return 0; 
}