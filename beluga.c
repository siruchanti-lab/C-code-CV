#include<stdio.h>
void main()
{
    int num[15],i;
    printf("enter any fifteen numbers");
    for(i=0;i<15;i++)
    scanf("%d",&num[i]);
    for(i=0;i<15;i+=2)
    printf("%d\n",num[i]);
}