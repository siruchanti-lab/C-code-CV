#include<stdio.h>
void main()
{
    int m[5],i;
    printf("enter any five numbers");
    for(i=0;i<5;i++)
    scanf("%d",&m[i]);
    for(i=0;i<5;i++)
    printf("m[%d]=%d",i,m[i]);
}