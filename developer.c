#include<stdio.h>
int main(void)
{
    int i,lim,osum=0,esum=0;
    printf("enter the limit\n");
    scanf("%d",&lim);
    for(i=0;i<=lim;i++)
    {
        if(i%2==0)
        esum=esum+i;
    else
    osum=osum+i;
    }
    printf("the sum of even %d\n the sum of odd %d",esum,osum);
}