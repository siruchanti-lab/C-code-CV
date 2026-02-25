#include<stdio.h>
void sum(int x, int y)
{
 printf("the sum is %d",x+y);
}
void main()
{
    int a,b;
    printf("enter any two numbers");
    scanf("%d,%d",&a,&b);
    sum(a,b);
}