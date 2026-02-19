#include<stdio.h>
void sum(int x,int y)
{
    printf("The sum of %d and %d is %d",x,y,x+y);
}
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum(a,b);
}