#include<stdio.h>
void main()
{
    int num[5],i;
    printf("enter any five numbers");
    for(i=0;i<5;i++)
    scanf("%d",&num[i]);
    printf("the square root of these numbers are %d",sqrt(num[i]));
}