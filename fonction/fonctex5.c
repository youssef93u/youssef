#include <stdio.h>
int factorielle(int n){
    if(n==0)
        return 1;
return n*= factorielle(n-1);

}
int main(){
     int n;
printf("entre la valeur de n :");
scanf("%d",&n);
factorielle(n);
printf("le factorielle de nombre %d est %d ",n,factorielle(n));


return 0;
}
