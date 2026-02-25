#include<stdio.h>
void main()
{
    int num[10],i,even=0,odd=0;
    printf("enter any ten numbers");
    for(i=0;i<10;i++)
    scanf("%d",num[i]);
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("the no of odd numbers is %d",odd);
    printf("the no of even numbers is %d",even);
}