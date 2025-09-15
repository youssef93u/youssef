#include <stdio.h>
#include <string.h>
void inverse_chaine(char str[]){
    int dbt = 0;
    int fin =strlen(str)-1;
    char temp;
 while(dbt<fin){
    temp=str[dbt];
    str[dbt]=str[fin];
    str[fin]=temp;
    dbt++;
    fin--;
 }
}
int main(){
   char chaine[100] ;
   printf("entrer une chaine :");
   scanf("%s",chaine);
inverse_chaine(chaine);
   printf("la chaine inverser: %s",chaine);

   return 0;

}
