#include<stdio.h>
void interchange(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("the values of %d,%d,%d are",x,y,z);
}
void main()
{
    int a,b;
    printf("enter the values of a,b");
    scanf("%d,%d",&a,&b);
    interchange(a,b);
}