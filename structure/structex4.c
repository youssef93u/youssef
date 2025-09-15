#include<stdio.h>
struct point{
int x,y;
};
int main(){
struct point p ={2,3};
struct point *ptr=&p;
ptr->x=10;
ptr->y=20;
printf("point:(%d,%d)\n",p.x,p.y);
return 0;
}
