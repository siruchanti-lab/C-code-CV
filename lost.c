#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("the number raised to powers of 2 3 and 4 are %f %f %f",pow(n,2),pow(n,3),pow(n,4));
}