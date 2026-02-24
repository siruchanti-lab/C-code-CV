#include<stdio.h>
void main()
{
    int s=0,i,lim;
    printf("enter the limit");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
        s=s+i;
    }
    printf("the sum is=%d",s);
}