#include <stdio.h>
struct rectangle{
float longueur;
float largueur;
};
float surface(struct rectangle r){
     return r.longueur * r.largueur;

}
 int main(){
 struct rectangle rec ={3.0,6.0};
 printf("surface = %.2f \n",surface(rec));




   return 0;

}
