#include<stdio.h>
int main()
{
 int r;
 printf("Enter the radius:");
 scanf("%d",&r);
 int a=area(r);
 int c=circumference(r);
 printf("area:%d\ncircumference:%d",a,c);
}
 int area(int r)
{
 int a=3.14*r*r;
 return a;
}
int circumference(int r)
{
 int c=2*3.14*r;
 return c;
}
