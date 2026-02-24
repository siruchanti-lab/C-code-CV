#include<stdio.h>
void main()
{
    int i,fact=1,lim;
    printf("enter the limit");
    scanf("%d",lim);
    for(i=1;i<=lim;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of all the numbers is %d",fact);
}