#include<stdio.h>
void main()
{
    int i;
    for(i=40;i<=150;i++)
    {
        if(i%7==0)
        printf("%d\n",i)
        else
        continue;
    }
}