#include<stdio.h>
void main()
{
    int num[10],i,evsum=0,odsum=0;
    printf("enter any ten numbers");
    for(i=0;i<10;i++)
    scanf("%d",num[i]);
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        evsum+=num[i];
        else
        odsum+=num[i];
    }
    printf("The even sum is %d",evsum);
    printf("\nThe odd sum is %d",odsum);
}