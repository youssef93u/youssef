#include <stdio.h>
int main(){
int i,n,a=0,b=1,j;
printf("entrer le nombre des termes:");
scanf("%d",&n);
  for(i=0;i<=n;i++){
    if(i==0){
    printf("%d,",a);
}else if(i==1){
       printf("%d,",b);
}else{
    j = a+b;
    printf(" %d, ",j);
    a=b;
    b=j;

}}
return 0 ;
  }