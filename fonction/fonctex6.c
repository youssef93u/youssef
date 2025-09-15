#include <stdio.h>
long long fibonacci(int n){
     if(n==0)
        return 0;
     if(n==1)
        return 1;
     if(n>=2)
        return fibonacci(n-2)+ fibonacci(n-1);
}
int main(){
   int n ;
   printf("entrer le nombre n :");
   scanf("%d",&n);
   fibonacci(n);
   printf("la fibonacci de %d est %lld ",n,fibonacci(n));

   return 0;

}
