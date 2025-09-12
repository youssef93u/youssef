#include <stdio.h>
int main() {
char voy;
printf("entrer les voyelles :");
scanf("%c",&voy);
switch(voy){
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
    printf("est un voyelles");
    break;
  
    default :
    printf("error");
}
return 0;
}